void ChangeStereo(byte param){
    
    byte tmp;
    if (choix_ctrl < 5) {tmp = 0;}
    if (choix_ctrl == 5) {tmp = 1;}
    if (choix_ctrl == 6) {tmp = 2;}
    if (valeurs_Bank[pied][param + tmp] == 0) {
        tcaselect(4); display.invertDisplay(1);
        valeurs_Bank[pied][param + tmp] = 1;
        valeurs_Bank_Copy[pied][param + tmp] = 1;
        WingMidiSolo();
    }
    else {        
        tcaselect(4); display.invertDisplay(0);
        valeurs_Bank[pied][param + tmp] = 0;
        valeurs_Bank_Copy[pied][param + tmp] = 0;
        WingMidiStereo();
    }
    CCStereoisation = param + tmp;
}