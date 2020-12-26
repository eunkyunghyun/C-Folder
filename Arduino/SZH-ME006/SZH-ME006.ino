#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>
#define DHTPIN A1
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

int dust_sensor = A0;

int rgb_red = 5;
int rgb_green = 6;
int rgb_blue = 7;

float dust_value = 0;
float dust_Densityug = 0;

int sensor_led = 12;
int sampling = 280;
int waiting = 40;
float stop_time = 9680;

double five_dust[5] = {0};
double recent_dust = 0;
double total_dust = 0;

float dust_init = 0;
float dust_initial = 0;

LiquidCrystal_I2C lcd(0x27, 16, 2);

byte humi[8] = {
  0b00000,
  0b10001,
  0b10001,
  0b10001,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
};

byte temp[8] = {
  0b00100,
  0b01010,
  0b01010,
  0b01010,
  0b01010,
  0b10001,
  0b11111,
  0b01110,
};

byte char_temp[8] = {
  0b10000,
  0b00110,
  0b01001,
  0b01000,
  0b01000,
  0b01000,
  0b01001,
  0b00110,
};

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.createChar(1, temp);
  lcd.createChar(2, humi);
  lcd.createChar(3, char_temp);
  pinMode(sensor_led, OUTPUT);
  pinMode(4, OUTPUT);

  pinMode(rgb_red, OUTPUT);
  pinMode(rgb_green, OUTPUT);
  pinMode(rgb_blue, OUTPUT);

  Serial.begin(9600);

  for (int i = 0; i < 5; i++)
  {
    digitalWrite(sensor_led, LOW);
    delayMicroseconds(sampling);
    dust_init += analogRead(dust_sensor);
    delayMicroseconds(waiting);
    digitalWrite(sensor_led, HIGH);
    delayMicroseconds(stop_time);
  }
  dust_initial = (((dust_init / 5) * 5.0) / 1024.0);
  Serial.print("dust_initial: ");
  Serial.println(dust_initial);
}

void loop() {
  digitalWrite(sensor_led, LOW);
  delayMicroseconds(sampling);

  int count = 0;
  dust_value = analogRead(dust_sensor);

  delayMicroseconds(waiting);

  digitalWrite(sensor_led, HIGH);
  delayMicroseconds(stop_time);

  recent_dust = (((dust_value * (5.0 / 1024)) - dust_initial) / 0.005);
  five_dust[4] = recent_dust;
  total_dust = five_dust[4];

  for (int i = 0; i < 4; i++)
  {
    total_dust += five_dust[i];
    five_dust[i] = five_dust[i + 1];
  }
  if (five_dust[0] != 0)
  {
    dust_Densityug = total_dust / 5;
    Serial.print("Dust Density [ug/m^3]: ");
    Serial.println(dust_Densityug);
  }

  int humi = dht.readHumidity();
  int temp = dht.readTemperature();

  Serial.print("humidity: ");
  Serial.println(humi);
  Serial.print("\t temperature: ");
  Serial.println(temp);

  Serial.println();

  lcd.setCursor(0, 0);
  lcd.write(byte(1));
  lcd.setCursor(2, 0);
  lcd.print((int)temp);
  lcd.setCursor(5, 0);
  lcd.write(byte(3));

  lcd.setCursor(8, 0);
  lcd.write(byte(2));
  lcd.setCursor(10, 0);
  lcd.print(humi);
  lcd.setCursor(13, 0);
  lcd.print("%");

  lcd.setCursor(0, 1);
  lcd.print("F.Dust");
  lcd.setCursor(7, 1);
  lcd.print(dust_Densityug);
  lcd.setCursor(11, 1);
  lcd.print("ug/m3");

  if (dust_Densityug <= 30.0)
    light(0, 0, 255);
  else if (30.0 < dust_Densityug && dust_Densityug <= 80.0)
    light(0, 255, 0);
  else if (80.0 < dust_Densityug && dust_Densityug <= 150.0)
    light(255, 80, 1);
  else
    light(255, 0, 0);

  delay(1000);
}

void light(int a, int b, int c) {
  analogWrite(rgb_red, a);
  analogWrite(rgb_green, b);
  analogWrite(rgb_blue, c);
}
