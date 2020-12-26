#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

int Relaypin1 = 7;
int Soil_moisture = A1;
int Red = 9;
int Yellow = 10;
int Green = 11;

void setup() {
  lcd.init();
  lcd.backlight();
  pinMode(Relaypin1, OUTPUT);
  pinMode(Red, OUTPUT);
  pinMode(Yellow, OUTPUT);
  pinMode(Green, OUTPUT);
}

void loop() {
  Flower_kit_on();
}

void Flower_kit_on() {
  int Soil_moisture = analogRead(A1);
  
  if (Soil_moisture > 1000)
  {
    digitalWrite(Red, HIGH);
    digitalWrite(Yellow, LOW);
    digitalWrite(Green, LOW);
    lcd.setCursor(2, 1);
    lcd.print("Water Demand");
    digitalWrite(Relaypin1, HIGH);
    delay(10000);
  }
  if (Soil_moisture > 600 && Soil_moisture < 1000)
  {
    digitalWrite(Red, LOW);
    digitalWrite(Yellow, HIGH);
    digitalWrite(Green, LOW);
    lcd.setCursor(2, 1);
    lcd.print("Water Caveat");
  }
  else if (Soil_moisture < 600)
  {
    digitalWrite(Red, LOW);
    digitalWrite(Yellow, LOW);
    digitalWrite(Green, HIGH);
    lcd.setCursor(2, 1);
    lcd.print("Water Enough");
    digitalWrite(Relaypin1, LOW);
    delay(10000);
    Flower_kit_off();
  }
}

void Flower_kit_off() {
  digitalWrite(Red, LOW);
  digitalWrite(Yellow, LOW);
  digitalWrite(Green, LOW);
  lcd.clear();
  digitalWrite(Relaypin1, LOW);
  delay(10000);
}
