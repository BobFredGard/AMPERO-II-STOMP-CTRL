 void SauveVol(){
    slq_request = "UPDATE 'stomps' SET 'stomps_id'="+String(bank_Count [bank]+ pied - 1)+", ";
    slq_request += "'"+String(prog_change_Tab - 1)+"'="+String(valeurs_Bank[pied][prog_change_Tab - 1])+", ";
    if (CCStereoisation == 40 or CCStereoisation == 41 or CCStereoisation == 42) {
        slq_request += "'"+String(CCStereoisation)+"'="+String(valeurs_Bank[pied][CCStereoisation])+", ";
    } 
    if (CCEXP == 43 or CCEXP == 44 or CCEXP == 45) {
        slq_request += "'"+String(CCEXP)+"'="+String(valeurs_Bank[pied][CCEXP])+", ";
    }
    for (i = 37; i < 39; i++) {
        slq_request += "'"+String(i)+"'="+String(valeurs_Bank[pied][i])+", ";
    }
    slq_request += "'"+String(39)+"'="+String(valeurs_Bank[pied][39]);
    slq_request += " WHERE stomps_id="+String(bank_Count [bank] + pied - 1)+";";
    if (db_open("/spiffs/base.db", &db_base)) return;
    db_exec(db_base, slq_request.c_str());
    //Serial.println(slq_request);
    sqlite3_close(db_base);
    delay(100);
    
    CCStereoisation = 0;
    CCEXP = 0;
}