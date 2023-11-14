void load_Patch() {
  if (bank != old_Bank) {
    //Serial.print("je change de ");
    pied = 1;
    readData ();
    program_change(ampero_bank_choice, prog_Change [pied], canal_midi); 
  }
  pre_pied = pied;
  bank_Copy = bank;
  old_Bank = bank;
  InvertDisplay();
  //Serial.println("Pied : " + String(pied));
}  