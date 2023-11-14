void InvertDisplay(){
  if (pied == 1) {tcaselect(0); display.invertDisplay(1);} else {tcaselect(0); display.invertDisplay(0);}
  if (pied == 2) {tcaselect(1); display.invertDisplay(1);} else {tcaselect(1); display.invertDisplay(0);}
  if (pied == 3) {tcaselect(2); display.invertDisplay(1);} else {tcaselect(2); display.invertDisplay(0);}
  if (pied == 4) {tcaselect(3); display.invertDisplay(1);} else {tcaselect(3); display.invertDisplay(0);}
  if (choix_ctrl == 5) {tcaselect(4); display.invertDisplay(1);} else {tcaselect(4); display.invertDisplay(0);}
  if (choix_ctrl == 6) {tcaselect(5); display.invertDisplay(1);} else {tcaselect(5); display.invertDisplay(0);}
}


