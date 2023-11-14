void WingMidiSolo() {
    midiUSBCC(MIDICanal[3], 22, 64);
    midiUSBCC(MIDICanal[2], 23, 127);
    MIDI.sendControlChange(22, 64, 3);
    MIDI.sendControlChange(23, 127, 2);
}

void WingMidiStereo() {
    midiUSBCC(MIDICanal[3], 22, 0);
    midiUSBCC(MIDICanal[2], 23, 0);
    MIDI.sendControlChange(22, 0, 3);
    MIDI.sendControlChange(23, 0, 2);
}