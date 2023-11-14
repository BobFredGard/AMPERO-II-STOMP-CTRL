void ScreenPatch(){
  menus = 1;
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
      case 0 : Oled_Text = patch_Names [valeurs_Bank [1] [prog_change_Tab - 1]]; break;
      case 1 : Oled_Text = patch_Names [valeurs_Bank [2] [prog_change_Tab - 1]]; break;
      case 2 : Oled_Text = patch_Names [valeurs_Bank [3] [prog_change_Tab - 1]]; break;
      case 3 : Oled_Text = patch_Names [valeurs_Bank [4] [prog_change_Tab - 1]]; break;
      case 4 : Oled_Text = "CTRL 1"; break;
      case 5 : Oled_Text = "CTRL 2"; break;
      case 6 : Oled_Text = "Bank " + String(bank); u8g2_for_adafruit_gfx.setFont(u8g2_font_logisoso24_tr); break;
      case 7 : Oled_Text = bank_Names [valeurs_Bank [1] [prog_change_Tab - 2]]; break;
    }
    OLEDSetup(Oled_Text, z);
  } 
  InvertDisplay();
}