   
button5.setPressTicks(500);
button6.setPressTicks(500);
button5.attachClick([]() {if (menus == 7){ScreenPatch(); etat_Loop = 1;}});
button6.attachClick([]() {if (menus == 7){SauveCTRL();}});
