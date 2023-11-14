void ScreenBank(){
    #include "ButtonBank.h"
    for (i = 0; i < 8; i++){
      tcaselect(i);
      display.clearDisplay();
      display.display();
    } 
    menus = 6;
    for (i = 0; i < 8; i++){
        tcaselect(i);
        u8g2_for_adafruit_gfx.setFont(u8g2_font_logisoso28_tr);
        display.clearDisplay();
        display.display();
        int z = 0;
        switch (i){
        case 0 : Oled_Text = "-"; u8g2_for_adafruit_gfx.setFont(u8g2_font_fub30_tr); break;
        case 1 : Oled_Text = "+"; u8g2_for_adafruit_gfx.setFont(u8g2_font_fub30_tr);  break;
        case 2 : Oled_Text = "CHOIX";  break;
        case 3 : Oled_Text = "BANK"; break;
        case 4 : Oled_Text = "--->>>"; break;
        case 5 : Oled_Text = "LOAD"; break;
        case 6 : Oled_Text = "Bank " + String(bank); u8g2_for_adafruit_gfx.setFont(u8g2_font_logisoso24_tr); break;
        case 7 : Oled_Text = "<<<---"; break;
        }
        OLEDSetup(Oled_Text, z);
    } 
  while (menus == 6){
    #include "ButtonTick.h"
  }
}