void ScreenSauve() {
  int tmp = 500;
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
      case 0 : Oled_Text = "B"; u8g2_for_adafruit_gfx.setFont(u8g2_font_fub30_tr); break;
      case 1 : Oled_Text = "E"; u8g2_for_adafruit_gfx.setFont(u8g2_font_fub30_tr); break;
      case 2 : Oled_Text = "C"; u8g2_for_adafruit_gfx.setFont(u8g2_font_fub30_tr); break;
      case 3 : Oled_Text = "O"; u8g2_for_adafruit_gfx.setFont(u8g2_font_fub30_tr); break;
      case 4 : Oled_Text = "O"; u8g2_for_adafruit_gfx.setFont(u8g2_font_fub30_tr); break;
      case 5 : Oled_Text = "L"; u8g2_for_adafruit_gfx.setFont(u8g2_font_fub30_tr); break;
      case 6 : Oled_Text = "Savegarde"; u8g2_for_adafruit_gfx.setFont(u8g2_font_logisoso22_tr); break;
      case 7 : Oled_Text = "en cours"; break;
    }
    OLEDSetup(Oled_Text, z);
  }
}