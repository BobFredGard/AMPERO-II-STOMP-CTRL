void program_change_value(){
  if (prog_Change[pied] < 128){ampero_bank_choice = 0;}
  if (prog_Change[pied] > 127 && prog_Change[pied] < 257){ampero_bank_choice = 1;}
  if (prog_Change[pied] > 255 && prog_Change[pied] < 301){ampero_bank_choice = 2;}
}

void program_change(byte CC, int val, byte canal) {
  MIDI.sendControlChange(0, CC, canal);
  MIDI.sendProgramChange(val, canal);
}