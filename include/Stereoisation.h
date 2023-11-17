void WingMidiSolo() {
    MIDI.sendControlChange(22, 1, 3); // /ch/11/pan ,f 0
    MIDI.sendControlChange(23, 1, 2); // /ch/12/mute ,i 1
    MIDI.sendControlChange(52, 1, 3); // /ch/11/pan ,f 0
    MIDI.sendControlChange(53, 1, 2); // /ch/30/mute ,i 1
    midiUSBCC(MIDICanal[1], 0, 127); // /ch/12/mute ,i 1
    midiUSBCC(MIDICanal[1], 0, 126); // /ch/11/pan ,f 0
    midiUSBCC(MIDICanal[1], 0, 125); // /ch/11/wid ,f 100
    midiUSBCC(MIDICanal[1], 1, 127); // /ch/30/mute ,i 1
    midiUSBCC(MIDICanal[1], 1, 126); // /ch/11/pan ,f 0
    midiUSBCC(MIDICanal[1], 1, 125); // /ch/11/wid ,f 100
}

void WingMidiStereo() {
    MIDI.sendControlChange(22, 0, 3); // /ch/11/pan ,f -100
    MIDI.sendControlChange(23, 0, 2); // /ch/12/mute ,i 0
    MIDI.sendControlChange(52, 0, 3); // /ch/29/pan ,f -100
    MIDI.sendControlChange(53, 0, 2); // /ch/30/mute ,i 0
    midiUSBCC(MIDICanal[1], 0, 124); // /ch/12/mute ,i 0
    midiUSBCC(MIDICanal[1], 0, 123); // /ch/11/pan ,f -100
    midiUSBCC(MIDICanal[1], 0, 122); // /ch/11/wid ,f 0
    midiUSBCC(MIDICanal[1], 1, 124); // /ch/30/mute ,i 0
    midiUSBCC(MIDICanal[1], 1, 123); // /ch/29/pan ,f -100
    midiUSBCC(MIDICanal[1], 1, 122); // /ch/29/wid ,f 0
}