void ChangeSlotsA(byte param){
    byte tmp;
    if (choix_ctrl < 5) {tmp = 0;}
    if (choix_ctrl == 5) {tmp = 12;}
    if (choix_ctrl == 6) {tmp = 24;}
    k = param;
    j = tmp;
    
    if (valeurs_Bank[pied][tmp + param] == 0) {
        MIDI.sendControlChange(global_control_change [param], 127, canal_midi);
        tcaselect(param - 1); display.invertDisplay(1);
        valeurs_Bank[pied][tmp + param] = 127;
        valeurs_Bank_Copy[pied][tmp + param] = 127;
    }
    else {        
        MIDI.sendControlChange(global_control_change [param], 0, canal_midi);
        tcaselect(param - 1); display.invertDisplay(0);
        valeurs_Bank[pied][tmp + param] = 0;
        valeurs_Bank_Copy[pied][tmp + param] = 0;
    }
}