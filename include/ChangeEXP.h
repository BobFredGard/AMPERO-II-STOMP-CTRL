void ChangeEXP(byte param2){
    
    byte tmp;
    if (choix_ctrl < 5) {tmp = 0;}
    if (choix_ctrl == 5) {tmp = 1;}
    if (choix_ctrl == 6) {tmp = 2;}
    if (valeurs_Bank[pied][param2 + tmp] == 0) {
        tcaselect(5); display.invertDisplay(1);
        valeurs_Bank[pied][param2 + tmp] = 127;
        valeurs_Bank_Copy[pied][param2 + tmp] = 127;
        MIDI.sendControlChange(13, 127, canal_midi);
    }
    else {        
        tcaselect(5); display.invertDisplay(0);
        valeurs_Bank[pied][param2 + tmp] = 0;
        valeurs_Bank_Copy[pied][param2 + tmp] = 0;
        MIDI.sendControlChange(13, 0, canal_midi);
    }
    CCEXP = param2 + tmp;
}