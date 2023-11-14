void midiUSBCC(int canal, int CC, int Val)
{
    Serial.write(canal);
    Serial.write(CC);
    Serial.write(Val);
}