#define TCAADDR 0x70 

void tcaselect(uint8_t bus) {
  if (bus > 7) return;
  //if (bus == 6){tselectScreen = 1;} else {tselectScreen = 0;}
  Wire.beginTransmission(TCAADDR);
  Wire.write(1 << bus);
  Wire.endTransmission();
}

void OLEDSetup(String texte, int z) {
  int16_t height;
  int16_t width;
  height = u8g2_for_adafruit_gfx.getFontAscent() - u8g2_for_adafruit_gfx.getFontDescent();
  width = u8g2_for_adafruit_gfx.getUTF8Width(texte.c_str());
  display.clearDisplay();
  display.display();
  u8g2_for_adafruit_gfx.setFontMode(1);
  u8g2_for_adafruit_gfx.setFontDirection(0);
  u8g2_for_adafruit_gfx.setForegroundColor(WHITE);
  u8g2_for_adafruit_gfx.setCursor(64-width/2-2,13+height/2);
  u8g2_for_adafruit_gfx.print(texte);
  display.invertDisplay(z);
  display.display();
}

void InitSreens() {
  choix_ctrl = 1;
  for (i = 0; i < 8; i++){
    tcaselect(i);
    display.begin(SSD1306_SWITCHCAPVCC);
    u8g2_for_adafruit_gfx.begin(display);
  }
  pied = 1;
}