void ScreenSlotsB(){
    #include "ButtonSlotsB.h"
    for (i = 0; i < 8; i++){
      tcaselect(i);
      display.clearDisplay();
      display.display();
    } 
    byte tmp; String Oled_Text1;
    if (choix_ctrl < 5) {tmp = 7; Oled_Text1 = "PATCH";}
    if (choix_ctrl == 5) {tmp = 19; Oled_Text1 = "CTRL 1";}
    if (choix_ctrl == 6) {tmp = 31; Oled_Text1 = "CTRIL 2";}
    menus = 4;
    for (i = 0; i < 8; i++){
        tcaselect(i);
        u8g2_for_adafruit_gfx.setFont(u8g2_font_fub30_tr);
        display.clearDisplay();
        display.display();
        int z = 0;
        switch (i){
        case 0 : if (valeurs_Bank [pied] [tmp] == 127) {z = 1;} else {z = 0;} Oled_Text = "B1"; break;
        case 1 : if (valeurs_Bank [pied] [tmp] == 127) {z = 1;} else {z = 0;} Oled_Text = "B2"; break;
        case 2 : if (valeurs_Bank [pied] [tmp] == 127) {z = 1;} else {z = 0;} Oled_Text = "B3"; break;
        case 3 : if (valeurs_Bank [pied] [tmp] == 127) {z = 1;} else {z = 0;} Oled_Text = "B4"; break;
        case 4 : if (valeurs_Bank [pied] [tmp] == 127) {z = 1;} else {z = 0;} Oled_Text = "B5"; break;
        case 5 : if (valeurs_Bank [pied] [tmp] == 127) {z = 1;} else {z = 0;} Oled_Text = "B6"; break;
        case 6 : Oled_Text = Oled_Text1; Oled_Text = "Bank " + String(bank); u8g2_for_adafruit_gfx.setFont(u8g2_font_logisoso24_tr); break;
        case 7 : Oled_Text = "SAVE-->"; Oled_Text = "SAVE-->"; u8g2_for_adafruit_gfx.setFont(u8g2_font_logisoso24_tr); break;
        }
        tmp = tmp + 1;
        OLEDSetup(Oled_Text, z);
    } 
  while (menus == 4){
    #include "ButtonTick.h"
  }
}