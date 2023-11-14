void SauveCTRL() {
    ScreenSauve();
    slq_request = "UPDATE 'stomps' SET 'stomps_id'="+String(bank_Count[bank]+ pied - 1)+", ";
    for (i = 13; i < 25; i++) {
        slq_request += "'"+String(i)+"'="+String(valeurs_Bank[pied][i-12])+",";
    }
    for (i = 25; i < 36; i++) {
        slq_request += "'"+String(i)+"'="+String(valeurs_Bank[pied][i-24])+",";
    }
    slq_request += "'"+String(36)+"'="+String(valeurs_Bank[pied][12]);
    slq_request += " WHERE stomps_id="+String(bank_Count[bank] + pied - 1)+";";
    
    if (db_open("/spiffs/base.db", &db_base)) return;
    db_exec(db_base, slq_request.c_str());
   // Serial.println(slq_request);
    sqlite3_close(db_base);
    readData();
    ScreenPatch();
    etat_Loop = 1;
}