void ScreenStomps(){
  int tmp = 800;
  for (i = 0; i < 6; i++){
    tcaselect(i);
    display.clearDisplay();
    display.display();
  } 
  for (i = 0; i < 6; i++){
    tcaselect(i);
    u8g2_for_adafruit_gfx.setFont(u8g2_font_logisoso28_tr);
    display.clearDisplay();
    display.display();
    int z = 0;
    switch (i){
      case 0 : Oled_Text = "S"; u8g2_for_adafruit_gfx.setFont(u8g2_font_fub30_tr); break;
      case 1 : Oled_Text = "T"; u8g2_for_adafruit_gfx.setFont(u8g2_font_fub30_tr); break;
      case 2 : Oled_Text = "O"; u8g2_for_adafruit_gfx.setFont(u8g2_font_fub30_tr); break;
      case 3 : Oled_Text = "M"; u8g2_for_adafruit_gfx.setFont(u8g2_font_fub30_tr); break;
      case 4 : Oled_Text = "P"; u8g2_for_adafruit_gfx.setFont(u8g2_font_fub30_tr); break;
      case 5 : Oled_Text = "S"; u8g2_for_adafruit_gfx.setFont(u8g2_font_fub30_tr); break;
    }
    OLEDSetup(Oled_Text, z);
    delay(tmp);
    tmp = tmp / 1.8;
  } 
  delay (800);
}