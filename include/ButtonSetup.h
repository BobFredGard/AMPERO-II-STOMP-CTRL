button5.setPressTicks(500);

button1.attachClick([]() {if (menus == 2){ChangeNames();}});
button2.attachClick([]() {if (menus == 2){ChangeBankName();}});
button3.attachClick([]() {if (menus == 2){ChangeVolMoins();}});
button4.attachClick([]() {if (menus == 2){ChangeVolPlus();}});
button5.attachClick([]() {if (menus == 2){ChangeStereo(40);}});
button6.attachClick([]() {if (menus == 2){ChangeEXP(43);}});

button5.attachLongPressStop([]() {if (k == 1){
  ScreenSauve();
  SauveVol(); 
  ScreenPatch(); 
  etat_Loop = 1;
}});
