void CopyBankPlus(){

    if (copy_bank > 0) {
        copy_bank = copy_bank + 1;
    }
    if (copy_bank > max_Bank)  {
        copy_bank = 1;
    }

    tcaselect(6);
    u8g2_for_adafruit_gfx.setFont(u8g2_font_logisoso28_tr);
    display.clearDisplay();
    display.display();
    Oled_Text = "Bank " + String(copy_bank); u8g2_for_adafruit_gfx.setFont(u8g2_font_logisoso24_tr);
    OLEDSetup(Oled_Text, 0);
}