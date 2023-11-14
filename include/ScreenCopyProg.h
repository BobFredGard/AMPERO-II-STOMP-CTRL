void ScreenCopyProg(){
    copy_bank = bank;
    copy_patch = pied;
    #include "ButtonCopyProg.h"
    menus = 5;
    for (i = 0; i < 8; i++){
      tcaselect(i);
      display.clearDisplay();
      display.display();
    } 
    for (i = 0; i < 8; i++){
        tcaselect(i);
        u8g2_for_adafruit_gfx.setFont(u8g2_font_logisoso24_tr);
        display.clearDisplay();
        display.display();
        int z = 0;
        switch (i){
        case 0 : Oled_Text = "Copy ->"; z = 1; break;
        case 1 : Oled_Text = "Bank " + String(bank); break;
        case 2 : Oled_Text = "Copy ->"; z = 1; break;
        case 3 : Oled_Text = "Patch " + String(pied); break;
        case 4 : Oled_Text = "Amp Prg>"; z = 1; break;
        case 5 : Oled_Text = prog_Change [pied]; u8g2_for_adafruit_gfx.setFont(u8g2_font_logisoso28_tr); break;
        case 6 : Oled_Text = "Bank " + String(copy_bank); break;
        case 7 : Oled_Text = "Patch " + String(copy_patch); break;
        }
        OLEDSetup(Oled_Text, z);
    } 
  while (menus == 5){
    #include "ButtonTick.h"
  }
}