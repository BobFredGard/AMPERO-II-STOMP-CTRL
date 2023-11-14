void CopyPathSceneMoins () {   
     if (copy_patch < 5) {
        copy_patch = copy_patch - 1;
    }
    if (copy_patch < 1)  {
        copy_patch = 4;
    }

    tcaselect(7);
    display.clearDisplay();
    display.display();
    Oled_Text = "Patch " + String(copy_patch); u8g2_for_adafruit_gfx.setFont(u8g2_font_logisoso24_tr);
    OLEDSetup(Oled_Text, 0);
}
