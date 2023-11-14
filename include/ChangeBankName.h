void ChangeBankName(){

    if (valeurs_Bank[1][prog_change_Tab - 2] > 0) {
        valeurs_Bank[1][prog_change_Tab - 2] = valeurs_Bank[1][prog_change_Tab - 2] + 1;
    }
    if (valeurs_Bank[1][prog_change_Tab - 2] > bank_Names_number)  {
        valeurs_Bank[1][prog_change_Tab - 2] = 1;
    }

    tcaselect(1);
    u8g2_for_adafruit_gfx.setFont(u8g2_font_logisoso28_tr);
    display.clearDisplay();
    display.display();
    OLEDSetup(bank_Names [valeurs_Bank[1][prog_change_Tab - 2]], 0);

    slq_request = "UPDATE 'stomps' SET 'stomps_id'="+String(bank_Count [bank])+", ";
    slq_request += "'"+String(prog_change_Tab - 2)+"'="+String(valeurs_Bank[1][prog_change_Tab - 2]);
    slq_request += " WHERE stomps_id="+String(bank_Count [bank])+";";
    if (db_open("/spiffs/base.db", &db_base)) return;
    db_exec(db_base, slq_request.c_str());
    sqlite3_close(db_base);
}