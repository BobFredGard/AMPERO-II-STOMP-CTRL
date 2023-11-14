void ChangeNames(){

    if (valeurs_Bank[pied][prog_change_Tab - 1] > 0) {
        valeurs_Bank[pied][prog_change_Tab - 1] = valeurs_Bank[pied][prog_change_Tab - 1] + 1;
    }
    if (valeurs_Bank[pied][prog_change_Tab - 1] > patch_Names_number)  {
        valeurs_Bank[pied][prog_change_Tab - 1] = 1;
    }

    tcaselect(0);
    u8g2_for_adafruit_gfx.setFont(u8g2_font_logisoso28_tr);
    display.clearDisplay();
    display.display();
    OLEDSetup(patch_Names [valeurs_Bank[pied][prog_change_Tab - 1]], 0);
}