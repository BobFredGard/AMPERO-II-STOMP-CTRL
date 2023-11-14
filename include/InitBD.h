static const char* daTa = "Callback function called";
char *zErrMsg = 0;

static int db_open(const char *filename, sqlite3 **db) {
  sqlite3_open(filename, db);
  return 0;
}

static int call(void *daTa, int argc, char **argv, char **azColName) {
  static int m;
    for (m = 0; m<argc; m++){
      String val = argv[m];
      String val2 = azColName[m];
      if (m < prog_change_Tab) {
        valeurs_Bank[i][m] = val.toInt();
        valeurs_Bank_Copy [i][m] = val.toInt();
      }
      if (m == prog_change_Tab) {
        prog_Change [i]= val.toInt();
        prog_Change_Copy [i]= val.toInt();
      }
      //Serial.print(String(valeurs_Bank[i][m]) + ", " );
    }
  return 0;
}

static int db_exec(sqlite3 *db, const char *slq_request) {
sqlite3_exec(db, slq_request, call, (void*)daTa, &zErrMsg);
return 0;
}