#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2); 
int ad = 0;
void setup() {
  lcd.init(); // init = 초기화
  lcd.backlight();
}

void loop() {
  for(ad = 0;ad<17;ad++)
  {
    lcd.setCursor(ad,0);
    lcd.print("This is");
    lcd.setCursor(ad,1);
    lcd.print("ad");
    delay(1000);
    lcd.clear();
  }
}
