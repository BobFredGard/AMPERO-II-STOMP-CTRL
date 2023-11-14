  button5.setPressTicks(500);

  button1.attachClick([]() {if (menus == 3){ChangeSlotsA(1);}});
  button2.attachClick([]() {if (menus == 3){ChangeSlotsA(2);}});
  button3.attachClick([]() {if (menus == 3){ChangeSlotsA(3);}});
  button4.attachClick([]() {if (menus == 3){ChangeSlotsA(4);}});
  button5.attachClick([]() {if (menus == 3){ChangeSlotsA(5);}});
  button6.attachClick([]() {if (menus == 3){ChangeSlotsA(6);}});

  if (choix_ctrl < 5) {button5.attachLongPressStop([]() {
    if (menus == 3){
      ScreenSauve();
      SauveSlots();
      ScreenCTRL();
    }});}
  else {button5.attachLongPressStop([]() {if (menus == 3){
      ScreenSauve();
      SauveSlots();
      ScreenPatch();
      etat_Loop = 1;
    }});}