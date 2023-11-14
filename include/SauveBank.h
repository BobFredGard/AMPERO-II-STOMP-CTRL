void SauveBank() {    
    ScreenSauve();
    slq_request = "";
    for (j = 1; j < 5; j++){
        slq_request += "UPDATE 'stomps' SET 'stomps_id'="+String(bank_Count [copy_bank]+ j - 1)+", ";
        for (i = 1; i < prog_change_Tab; i++) {
            slq_request += "'"+String(i)+"'="+String(valeurs_Bank[j][i])+",";
        }
        slq_request += "'"+String(prog_change_Tab)+"'="+String(prog_Change[j]);
        slq_request += " WHERE stomps_id="+String(bank_Count [copy_bank] + j - 1)+";";
    }
    if (db_open("/spiffs/base.db", &db_base)) return;
    db_exec(db_base, slq_request.c_str());
    //Serial.println(slq_request);
    sqlite3_close(db_base);
    delay(1000);
    bank = copy_bank;
    load_Patch();
    choix_ctrl = 1;
    ScreenPatch();
    etat_Loop = 1;
    //esp_restart();
} 