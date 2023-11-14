OneButton button1(12, true);
OneButton button2(14, true);
OneButton button3(27, true);
OneButton button4(26, true);
OneButton button5(25, true);
OneButton button6(33, true);

static int valeurs_Bank [5] [61] {};
static int valeurs_Bank_Copy [5] [61] {};
static int prog_Change [5], prog_Change_Copy [5];
static int prog_Change_Number = 300;
static int i, j, k, n = 0;
static int bank_Copy = 1;
static int CCStereoisation, CCEXP;
static int etat_Loop, ampero_bank_choice = 1;
static int choix_ctrl, pre_choix_ctrl = 1;
static int decalage_bank = 3;
static String Oled_Text = "NULLRIEN";
static String slq_request;

static int canal_midi = 7;       // Canal midi utilisé
static int pre_pied = 1;
static int copy_patch, copy_bank; 
static int old_Bank = 1;
static int bank = 1;
static int max_Bank = 128;        // Nombre de banques disponibles par groupe de 4 lignes soit 


static int menus = 1;
static int pied = 1;
static int prog_change_Tab = 60; // Valeur du program change dans la base de donnée

int MIDICanal[17] = {0, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191};
int MIDIPC[26] = {0, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216};

static int bank_Count [130] = 
{
    0,1,5,9,13,17,21,25,29,33,37,41,45,49,53,57,61,65,69,73,77,81,85,89,93,97,101,105,109,113,117,121,125,129,133,137,141,145,149,153,157,161,165,169,173,177,181,185,189,193,197,201,205,209,213,217,221,225,229,233,237,241,245,249,253,257,261,265,269,273,277,281,285,289,293,297,301,305,309,313,317,321,325,329,333,337,341,345,349,353,357,361,365,369,373,377,381,385,389,393,397,401,405,409,413,417,421,425,429,433,437,441,445,449,453,457,461,465,469,473,477,481,485,489,493,497,501,505,509,513

};

static int patch_Names_number = 17;
static String patch_Names [18] 
{
    "", "CLEAN", "DRIVE", "DRIVY", "CRUNCH", "CRUNCHY", "SATUR", "CL-SOLO", "SOLO", "BIGSOLO",
    "CHORUS", "DELAY", "FLANGER", "TREMOLO", "DRV OD", "FUZZ", "MARSHAL", "FENDER", 
};

static int bank_Names_number = 20;
static String bank_Names [21] 
{
    "", "VRAI TOI", "YOU&ME", "BLACK V", "COLORS", "SOUL", "HARD", "COOL", "TINY", "HUGE",
    "GN MOON" , "CALL ME","BREATH", "NO GOOD", "WHAT'UP", "ROME", "CRAZY", "BAD|NEWS", "SIGN", "KIDS OF",  "HYGIA|PH"
};

static int global_control_change [13] =
{
   0, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59
};

unsigned char HexaGitStWing [6] = {0xF0, 0x00, 0x20, 0x32, 0x57, 0x02};
static String GitStON = "/ch.12.mute=1,.11.pan=0";
static String GitStOFF = "/ch.12.mute=0,.11.pan=-100";