#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {

  lcd.init();
  lcd.setBacklight(HIGH);
  lcd.setCursor(0, 0);
  lcd.print("¡Hola Mundo!");
  lcd.setCursor(0,1);
  lcd.print("Hola Mari");
}

void loop() {
  // put your main code here, to run repeatedly:

}
