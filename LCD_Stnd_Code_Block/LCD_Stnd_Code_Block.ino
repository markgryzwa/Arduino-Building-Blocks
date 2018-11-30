
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3f,20,4);  // set the LCD address to 0x3f (address,x,y)
                                   // its not at 0x27 as internet instructions state
                                   // connect SDA to A4 and SCL to A5
//  ----------------------------------------------------------------------------------

void setup() {
  lcd.init();                      // initialize the lcd 
  lcd.backlight();                 
  lcd.clear();

}
//  ----------------------------------------------------------------------------------

void loop() {
  lcd.setCursor(x,y);
  lcd.print("Hello>");

}
