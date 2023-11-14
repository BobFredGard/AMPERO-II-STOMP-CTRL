void ChangeVolMoins(){
    byte tmp;
    String Oled_Text1;
    if (choix_ctrl < 5) {tmp = 0;}
    if (choix_ctrl == 5) {tmp = 1;}
    if (choix_ctrl == 6) {tmp = 2;}

    if (valeurs_Bank [pied] [37 + tmp]  < 101) {
        valeurs_Bank [pied] [37 + tmp] = valeurs_Bank [pied] [37 + tmp] - 1;
        valeurs_Bank_Copy [pied] [37 + tmp] = valeurs_Bank_Copy [pied] [37 + tmp] - 1;
    }
    if (valeurs_Bank [pied] [37 + tmp] < 0)  {
        valeurs_Bank [pied] [37 + tmp] = 100;
        valeurs_Bank_Copy [pied] [37 + tmp] = 100;
    }
    MIDI.sendControlChange(7, valeurs_Bank [pied] [37 + tmp], canal_midi);
    tcaselect(7);
    u8g2_for_adafruit_gfx.setFont(u8g2_font_logisoso28_tr);
    display.clearDisplay();
    display.display();
    Oled_Text = "Vol " + String(valeurs_Bank [pied] [37 + tmp]);
    OLEDSetup(Oled_Text, 0);
}