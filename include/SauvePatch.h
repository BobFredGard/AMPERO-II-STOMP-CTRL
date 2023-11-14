void SauvePatch() {
    ScreenSauve();

    slq_request = "UPDATE 'stomps' SET 'stomps_id'="+String(bank_Count [bank]+ copy_patch - 1)+", ";
    for (i = 1; i < prog_change_Tab; i++) {
        slq_request += "'"+String(i)+"'="+String(valeurs_Bank[pied][i])+",";
    }
    slq_request += "'"+String(prog_change_Tab)+"'="+String(prog_Change[pied]);
    
    slq_request += " WHERE stomps_id="+String(bank_Count [bank] + copy_patch - 1)+";";
    if (db_open("/spiffs/base.db", &db_base)) return;
    db_exec(db_base, slq_request.c_str());
    //Serial.println(slq_request);
    sqlite3_close(db_base);
    readData();

    for (i = 0; i < 8; i++){
        tcaselect(i);
        u8g2_for_adafruit_gfx.setFont(u8g2_font_logisoso24_tr);
        display.clearDisplay();
        display.display();
        int z = 0;
        switch (i){
        case 0 : Oled_Text = "Copy ->"; break;
        case 1 : Oled_Text = "Bank " + String(bank); break;
        case 2 : Oled_Text = "Copy ->"; break;
        case 3 : Oled_Text = "Patch " + String(pied); break;
        case 4 : Oled_Text = "Amp Prg>"; break;
        case 5 : Oled_Text = prog_Change [pied]; u8g2_for_adafruit_gfx.setFont(u8g2_font_logisoso28_tr); break;
        case 6 : Oled_Text = "Bank " + String(copy_bank); break;
        case 7 : Oled_Text = "Patch " + String(copy_patch); break;
        }
        OLEDSetup(Oled_Text, z);
    } 
}