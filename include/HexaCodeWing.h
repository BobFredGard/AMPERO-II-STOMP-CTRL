void HexaCodeWing (String HaxaTranfert) {
Serial2.write(0xF0);
Serial2.write(0x00);
Serial2.write(0x20);
Serial2.write(0x32);
Serial2.write(0x57);
Serial2.write(0x02);
for (j = 0; j < HaxaTranfert.length(); j++ ){
	if (HaxaTranfert.charAt(j) == '=') {Serial2.write(0x3D);}
	if (HaxaTranfert.charAt(j) == ',') {Serial2.write(0x2C) ;}
	if (HaxaTranfert.charAt(j) == '-') {Serial2.write(0x2D) ;}
	if (HaxaTranfert.charAt(j) == '.') {Serial2.write(0x2E) ;}
	if (HaxaTranfert.charAt(j) == '/') {Serial2.write(0x2F) ;}
	if (HaxaTranfert.charAt(j) == ':') {Serial2.write(0x3A) ;}
	if (HaxaTranfert.charAt(j) == '0') {Serial2.write(0x30) ;}
	if (HaxaTranfert.charAt(j) == '1') {Serial2.write(0x31) ;}
	if (HaxaTranfert.charAt(j) == '2') {Serial2.write(0x32) ;}
	if (HaxaTranfert.charAt(j) == '3') {Serial2.write(0x33) ;}
	if (HaxaTranfert.charAt(j) == '4') {Serial2.write(0x34) ;}
	if (HaxaTranfert.charAt(j) == '5') {Serial2.write(0x35) ;}
	if (HaxaTranfert.charAt(j) == '6') {Serial2.write(0x36) ;}
	if (HaxaTranfert.charAt(j) == '7') {Serial2.write(0x37) ;}
	if (HaxaTranfert.charAt(j) == '8') {Serial2.write(0x38) ;}
	if (HaxaTranfert.charAt(j) == '9') {Serial2.write(0x39) ;}
	if (HaxaTranfert.charAt(j) == 'a') {Serial2.write(0x61) ;}
	if (HaxaTranfert.charAt(j) == 'b') {Serial2.write(0x62) ;}
	if (HaxaTranfert.charAt(j) == 'c') {Serial2.write(0x63) ;}
	if (HaxaTranfert.charAt(j) == 'd') {Serial2.write(0x64) ;}
	if (HaxaTranfert.charAt(j) == 'e') {Serial2.write(0x65) ;}
	if (HaxaTranfert.charAt(j) == 'f') {Serial2.write(0x66) ;}
	if (HaxaTranfert.charAt(j) == 'g') {Serial2.write(0x67) ;}
	if (HaxaTranfert.charAt(j) == 'h') {Serial2.write(0x68) ;}
	if (HaxaTranfert.charAt(j) == 'i') {Serial2.write(0x69) ;}
	if (HaxaTranfert.charAt(j) == 'j') {Serial2.write(0x6A) ;}
	if (HaxaTranfert.charAt(j) == 'k') {Serial2.write(0x6B) ;}
	if (HaxaTranfert.charAt(j) == 'l') {Serial2.write(0x6C) ;}
	if (HaxaTranfert.charAt(j) == 'm') {Serial2.write(0x6D) ;}
	if (HaxaTranfert.charAt(j) == 'n') {Serial2.write(0x6E) ;}
	if (HaxaTranfert.charAt(j) == 'o') {Serial2.write(0x6F) ;}
	if (HaxaTranfert.charAt(j) == 'p') {Serial2.write(0x70) ;}
	if (HaxaTranfert.charAt(j) == 'q') {Serial2.write(0x71) ;}
	if (HaxaTranfert.charAt(j) == 'r') {Serial2.write(0x72) ;}
	if (HaxaTranfert.charAt(j) == 's') {Serial2.write(0x73) ;}
	if (HaxaTranfert.charAt(j) == 't') {Serial2.write(0x74) ;}
	if (HaxaTranfert.charAt(j) == 'u') {Serial2.write(0x75) ;}
	if (HaxaTranfert.charAt(j) == 'v') {Serial2.write(0x76) ;}
	if (HaxaTranfert.charAt(j) == 'w') {Serial2.write(0x77) ;}
	if (HaxaTranfert.charAt(j) == 'x') {Serial2.write(0x78) ;}
	if (HaxaTranfert.charAt(j) == 'y') {Serial2.write(0x79) ;}
	if (HaxaTranfert.charAt(j) == 'z') {Serial2.write(0x7A) ;}
	if (HaxaTranfert.charAt(j) == 'A') {Serial2.write(0x41) ;}
	if (HaxaTranfert.charAt(j) == 'B') {Serial2.write(0x42) ;}
	if (HaxaTranfert.charAt(j) == 'C') {Serial2.write(0x43) ;}
	if (HaxaTranfert.charAt(j) == 'D') {Serial2.write(0x44) ;}
	if (HaxaTranfert.charAt(j) == 'E') {Serial2.write(0x45) ;}
	if (HaxaTranfert.charAt(j) == 'F') {Serial2.write(0x46) ;}
	if (HaxaTranfert.charAt(j) == 'G') {Serial2.write(0x47) ;}
	if (HaxaTranfert.charAt(j) == 'H') {Serial2.write(0x3D) ;}
	if (HaxaTranfert.charAt(j) == 'I') {Serial2.write(0x49) ;}
	if (HaxaTranfert.charAt(j) == 'J') {Serial2.write(0x4A) ;}
	if (HaxaTranfert.charAt(j) == 'K') {Serial2.write(0x4B) ;}
	if (HaxaTranfert.charAt(j) == 'L') {Serial2.write(0x4C) ;}
	if (HaxaTranfert.charAt(j) == 'M') {Serial2.write(0x4D) ;}
	if (HaxaTranfert.charAt(j) == 'N') {Serial2.write(0x4E) ;}
	if (HaxaTranfert.charAt(j) == 'O') {Serial2.write(0x4F) ;}
	if (HaxaTranfert.charAt(j) == 'P') {Serial2.write(0x50) ;}
	if (HaxaTranfert.charAt(j) == 'Q') {Serial2.write(0x51) ;}
	if (HaxaTranfert.charAt(j) == 'R') {Serial2.write(0x52) ;}
	if (HaxaTranfert.charAt(j) == 'S') {Serial2.write(0x53) ;}
	if (HaxaTranfert.charAt(j) == 'T') {Serial2.write(0x54) ;}
	if (HaxaTranfert.charAt(j) == 'U') {Serial2.write(0x55) ;}
	if (HaxaTranfert.charAt(j) == 'V') {Serial2.write(0x56) ;}
	if (HaxaTranfert.charAt(j) == 'W') {Serial2.write(0x57) ;}
	if (HaxaTranfert.charAt(j) == 'X') {Serial2.write(0x58) ;}
	if (HaxaTranfert.charAt(j) == 'Y') {Serial2.write(0x59) ;}
	if (HaxaTranfert.charAt(j) == 'Z') {Serial2.write(0x5A) ;}
	if (HaxaTranfert.charAt(j) == ' ') {Serial2.write(0x20) ;}
	}
Serial2.write(0xF7);
}
