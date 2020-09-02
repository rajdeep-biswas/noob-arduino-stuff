#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // Set the LCD I2C address

void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("ducky LDR");
  delay(1000);
}

void loop() {
  unsigned int AnalogValue = analogRead(A0);
  Serial.println(AnalogValue);
  lcd.clear(); 
  lcd.setCursor(0, 0);
  if(AnalogValue < 300)
    lcd.print("rise and shine!");
  else if(AnalogValue >= 300)
    lcd.print("hello, darkness");
  lcd.setCursor(0, 1);
  lcd.print(AnalogValue);
  delay(10);
}
