void ScreenSetup(){
    byte tmp;
    String Oled_Text1;
    if (choix_ctrl < 5) {tmp = 0; Oled_Text1 = "PROG ";}
    if (choix_ctrl == 5) {tmp = 1; Oled_Text1 = "CTRL1";}
    if (choix_ctrl == 6) {tmp = 2; Oled_Text1 = "CTRL2";}
    #include "ButtonSetup.h"
    menus = 2;
    for (i = 0; i < 8; i++){
      tcaselect(i);
      
      display.clearDisplay();
      display.display();
    } 
    for (i = 0; i < 8; i++){
        tcaselect(i);
        u8g2_for_adafruit_gfx.setFont(u8g2_font_logisoso28_tr);
        display.clearDisplay();
        display.display();
        int z = 0;
        switch (i){
        case 0 : Oled_Text = patch_Names [valeurs_Bank [pied] [prog_change_Tab - 1]]; break;
        case 1 : Oled_Text = bank_Names [valeurs_Bank [1] [prog_change_Tab - 2]]; break;
        case 2 : Oled_Text = "-"; u8g2_for_adafruit_gfx.setFont(u8g2_font_fub30_tr); break;
        case 3 : Oled_Text = "+"; u8g2_for_adafruit_gfx.setFont(u8g2_font_fub30_tr); break;
        case 4 : if (valeurs_Bank [pied] [40 + tmp] == 0) {z = 0;} else {z = 1;} Oled_Text = "STEREO";  break;
        case 5 : if (valeurs_Bank [pied] [43 + tmp] == 0) {z = 0;} else {z = 1;} Oled_Text = "EXP ON"; break;
        case 6 : Oled_Text = Oled_Text1 + "->"; u8g2_for_adafruit_gfx.setFont(u8g2_font_logisoso24_tr); break;
        case 7 : Oled_Text = "Vol " + String(valeurs_Bank [pied] [37 + tmp]); break;
        }
        OLEDSetup(Oled_Text, z);
    } 
  unsigned long ecart = 1000; 
  unsigned long previousMillis = millis();
  k = 0;
  while (menus == 2){
    #include "ButtonTick.h"
    if (millis() > previousMillis + ecart) {k = 1;}
  }
}