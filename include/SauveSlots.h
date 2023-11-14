 void SauveSlots(){
    slq_request = "UPDATE 'stomps' SET 'stomps_id'="+String(bank_Count [bank]+ pied - 1)+", ";
    for (i = 1; i < 36; i++) {
        slq_request += "'"+String(i)+"'="+String(valeurs_Bank[pied][i])+", ";
    }
    slq_request += "'"+String(36)+"'="+String(valeurs_Bank[pied][36]);
    slq_request += " WHERE stomps_id="+String(bank_Count [bank] + pied - 1)+";";
    if (db_open("/spiffs/base.db", &db_base)) return;
    db_exec(db_base, slq_request.c_str());
    //Serial.println(slq_request);
    sqlite3_close(db_base);
}