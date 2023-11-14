void ChangeBankMoins(){

    if (bank < max_Bank + 1) {
        bank = bank - 1;
    }
    if (bank < 1)  {
        bank = max_Bank;
    }

    tcaselect(6);
    u8g2_for_adafruit_gfx.setFont(u8g2_font_logisoso28_tr);
    display.clearDisplay();
    display.display();
    Oled_Text = "Bank " + String(bank); u8g2_for_adafruit_gfx.setFont(u8g2_font_logisoso24_tr);
    OLEDSetup(Oled_Text, 0);
}