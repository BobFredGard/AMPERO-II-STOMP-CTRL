void SlotLoad(int choix) {  
  int o = 1;
  for (i; i < n + 12; i++){ // Send SLOTS A1 -> B6
    if (valeurs_Bank[pied][i+j] != valeurs_Bank_Copy[choix][i+k]) {
      MIDI.sendControlChange(global_control_change [o], valeurs_Bank[pied][i+j], canal_midi);
      //Serial.println ("Count : " + String(o) + " / Ctrl Change : " + String(global_control_change [o]) + " - " + String(valeurs_Bank[pied][i+j]));
    }
    o++;
  }
}

void loadPreset() {
    byte tmp;
    if (choix_ctrl < 5) {tmp = 0;}
    if (choix_ctrl == 5) {tmp = 1;}
    if (choix_ctrl == 6) {tmp = 2;}
  //Serial.println("Choix CTRL : " + String(choix_ctrl) + " / Pre_Choix CTRL : " + String(pre_choix_ctrl));
  if (prog_Change[pied] != prog_Change_Copy[pre_pied]) {
    program_change(ampero_bank_choice, prog_Change[pied], canal_midi);
    //Serial.println ("Prog Change : " + String(prog_Change[pied]));
    MIDI.sendControlChange(7,  valeurs_Bank [pied] [37 + tmp], canal_midi);
    MIDI.sendControlChange(13, valeurs_Bank [pied] [43 + tmp], canal_midi);
    if (valeurs_Bank[pied][40] == 0 ) {
      WingMidiSolo();
    }
    else {
      WingMidiStereo();
    }
  }
  else {
    if (choix_ctrl == 1) {
      if (pre_choix_ctrl == 1){i = 1; j = 0; k = 0; n = i; SlotLoad(pied);}
      if (pre_choix_ctrl == 2 or pre_choix_ctrl == 3 or pre_choix_ctrl == 4){
        i = 1; j = 0; k = 0; n = i;
        SlotLoad(pre_pied);
      }
      if (pre_choix_ctrl == 5 && pied == pied){i = 1; j = 0; k = 12; n = i; SlotLoad(pre_pied);}
      if (pre_choix_ctrl == 6 && pied == pied){i = 1; j = 0; k = 24; n = i; SlotLoad(pre_pied);}

      if (valeurs_Bank[pied][40 ] == 0 ) {
        WingMidiSolo();
      }
      else {
        WingMidiStereo();
      }
    }

    if (choix_ctrl == 2) {
      if (pre_choix_ctrl == 2){i = 1; j = 0; k = 0; n = i; SlotLoad(pied);}
      if (pre_choix_ctrl == 1 or pre_choix_ctrl == 3 or pre_choix_ctrl == 4){
        i = 1; j = 0; k = 0; n = i;
        SlotLoad(pre_pied);
      }
      if (pre_choix_ctrl == 5 && pied == pied){i = 1; j = 0; k = 12; n = i; SlotLoad(pre_pied);}
      if (pre_choix_ctrl == 6 && pied == pied){i = 1; j = 0; k = 24; n = i; SlotLoad(pre_pied);}

      if (valeurs_Bank[pied][40] == 0 ) {
        WingMidiSolo();
      }
      else {
        WingMidiStereo();
      }
    }

    if (choix_ctrl == 3) {
      if (pre_choix_ctrl == 3){i = 1; j = 0; k = 0; n = i; SlotLoad(pied);}
      if (pre_choix_ctrl == 1 or pre_choix_ctrl == 2 or pre_choix_ctrl == 4){
        i = 1; j = 0; k = 0; n = i;
        SlotLoad(pre_pied);
      }
      if (pre_choix_ctrl == 5 && pied == pied){i = 1; j = 0; k = 12; n = i; SlotLoad(pre_pied);}
      if (pre_choix_ctrl == 6 && pied == pied){i = 1; j = 0; k = 24; n = i; SlotLoad(pre_pied);}
      
      if (valeurs_Bank[pied][40] == 0 ) {
        WingMidiSolo();
      }
      else {
        WingMidiStereo();
      }
    }

    if (choix_ctrl == 4) {
      if (pre_choix_ctrl == 4){i = 1; j = 0; k = 0; n = i; SlotLoad(pied);}
      if (pre_choix_ctrl == 1 or pre_choix_ctrl == 3 or pre_choix_ctrl == 1){
        i = 1; j = 0; k = 0; n = i;
        SlotLoad(pre_pied);
      }
      if (pre_choix_ctrl == 5 && pied == pied){i = 1; j = 0; k = 12; n = i; SlotLoad(pre_pied);}
      if (pre_choix_ctrl == 6 && pied == pied){i = 1; j = 0; k = 24; n = i; SlotLoad(pre_pied);}
  
      if (valeurs_Bank[pied][40] == 0 ) {
        WingMidiSolo();
      }
      else {
        WingMidiStereo();
      }
    }

    if (choix_ctrl == 5 && pre_choix_ctrl != 5) {
      if (pre_choix_ctrl != 5 && pre_choix_ctrl != 6){i = 13; j = 0; k = -12; n = i; SlotLoad(pied);}
      if (pre_choix_ctrl == 6){i = 13; j = 0; k = 12; n = i; SlotLoad(pied);}
      
      if (valeurs_Bank[pied][41] == 0 ) {
        WingMidiSolo();
      }
      else {
        WingMidiStereo();
      }
    }
    
    if (choix_ctrl == 6 && pre_choix_ctrl != 6) {
      if (pre_choix_ctrl != 5 && pre_choix_ctrl != 6){i = 25; j = 0; k = -24; n = i; SlotLoad(pied);}
      if (pre_choix_ctrl == 5){i = 25; j = 0; k = -12; n = i; SlotLoad(pied);}
      
      if (valeurs_Bank[pied][42] == 0 ) {
        WingMidiSolo();
      }
      else {
        WingMidiStereo();
      }
    }
  }
  MIDI.sendControlChange(7,  valeurs_Bank [pied] [37 + tmp], canal_midi);
  MIDI.sendControlChange(13, valeurs_Bank [pied] [43 + tmp], canal_midi);
}