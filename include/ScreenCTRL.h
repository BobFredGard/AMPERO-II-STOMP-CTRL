void ScreenCTRL(){
  menus = 7;
  #include "ButtonCTRL.h"
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
      case 0 : Oled_Text = "Appliquer"; u8g2_for_adafruit_gfx.setFont(u8g2_font_logisoso24_tr); break;
      case 1 : Oled_Text = "sur"; break;
      case 2 : Oled_Text = "CTRL1 &"; break;
      case 3 : Oled_Text = "CTRL2 >"; break;
      case 4 : Oled_Text = "NON"; z = 1; break;
      case 5 : Oled_Text = "OUI"; break;
      case 6 : Oled_Text = " "; break;
      case 7 : Oled_Text = "SAVE-->"; break;
    }
    OLEDSetup(Oled_Text, z);
  }   
  while (menus == 7){
    #include "ButtonTick.h"
  }
}