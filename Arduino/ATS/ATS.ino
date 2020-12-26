#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

int trig = 8;
int echo = 9;
int buzzer = 12;

void setup() {
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {
  digitalWrite(trig, LOW);
  digitalWrite(echo, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
 
  unsigned long duration = pulseIn(echo, HIGH);
 
  float distance = duration / 29.0 / 2.0;
 
  Serial.print(distance);
  Serial.println("cm");
 
  if (distance < 2000) {
    lcd.clear();
    tone(buzzer, 1000, 1000);
    lcd.setCursor(3, 0);
    lcd.print("Dangerous!");
    delay(1000);
  }
  else
  {
    lcd.clear();
    lcd.setCursor(6, 0);
    lcd.print("Safe");
  }

  delay(100);
 }
