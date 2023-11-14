void ChangeProgPlus(){

    if (prog_Change [pied] > 0) {
        prog_Change [pied]= prog_Change [pied] + 1;
        prog_Change_Copy [pied] = prog_Change_Copy [pied] - 1;
    }
    if (prog_Change [pied] > 300)  {
        prog_Change [pied] = 1;
        prog_Change_Copy [pied] = 1;
    }
    program_change(ampero_bank_choice, prog_Change [pied], canal_midi);
    tcaselect(5);
    u8g2_for_adafruit_gfx.setFont(u8g2_font_logisoso28_tr);
    display.clearDisplay();
    display.display();
    Oled_Text = prog_Change [pied];
    OLEDSetup(Oled_Text, 0);
}