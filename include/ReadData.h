void readData (){
  if (db_open("/spiffs/base.db", &db_base)) return; 
  static int o;
  //Serial.print("Bank = "); Serial.println(bank);
  o = bank_Count[bank];
  for (i = 1; i < 5; i++) {
    slq_request = "SELECT * FROM stomps WHERE stomps_id = " + String(o) + ";";
    db_exec(db_base, slq_request.c_str());
    //Serial.print("ID = "); Serial.println(o);
    o = o + 1;
  }
  prog_Change [0]= 500;
  prog_Change_Copy [0]= 500;
  sqlite3_close(db_base);
}