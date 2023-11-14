void ScreenSlotsA(){
    #include "ButtonSlotsA.h"
    for (i = 0; i < 8; i++){
      tcaselect(i);
      display.clearDisplay();
      display.display();
    } 
    byte tmp; String Oled_Text1;
    if (choix_ctrl < 5) {tmp = 1; Oled_Text1 = "PATCH";}
    if (choix_ctrl == 5) {tmp = 13; Oled_Text1 = "CTRL 1";}
    if (choix_ctrl == 6) {tmp = 25; Oled_Text1 = "CTRIL 2";}
    menus = 3;
    for (i = 0; i < 8; i++){
        tcaselect(i);
        u8g2_for_adafruit_gfx.setFont(u8g2_font_fub30_tr);
        display.clearDisplay();
        display.display();
        int z = 0;
        switch (i){
        case 0 : if (valeurs_Bank [pied] [tmp] == 127) {z = 1;} else {z = 0;} Oled_Text = "A1"; break;
        case 1 : if (valeurs_Bank [pied] [tmp] == 127) {z = 1;} else {z = 0;} Oled_Text = "A2"; break;
        case 2 : if (valeurs_Bank [pied] [tmp] == 127) {z = 1;} else {z = 0;} Oled_Text = "A3"; break;
        case 3 : if (valeurs_Bank [pied] [tmp] == 127) {z = 1;} else {z = 0;} Oled_Text = "A4"; break;
        case 4 : if (valeurs_Bank [pied] [tmp] == 127) {z = 1;} else {z = 0;} Oled_Text = "A5"; break;
        case 5 : if (valeurs_Bank [pied] [tmp] == 127) {z = 1;} else {z = 0;} Oled_Text = "A6"; break;
        case 6 : Oled_Text = Oled_Text1; u8g2_for_adafruit_gfx.setFont(u8g2_font_logisoso28_tr); break;
        case 7 : Oled_Text = "SAVE-->"; u8g2_for_adafruit_gfx.setFont(u8g2_font_logisoso24_tr); break;
        }
        tmp = tmp + 1;
        OLEDSetup(Oled_Text, z);
    } 
  while (menus == 3){
    #include "ButtonTick.h"
  }
}