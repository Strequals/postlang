#include<map>
typedef unsigned char byte;

static const byte STDIO_ID = 0;

static const byte CIN_ID = 0;
static const byte COUT_ID = 1;
static const byte CERR_ID = 2;
static const byte CIN_I_ID = 3;
static const byte COUT_I_ID = 4;
static const byte CERR_I_ID = 5;
static const byte CIN_L_ID = 6;
static const byte COUT_L_ID = 7;
static const byte CERR_L_ID = 8;
static const byte CIN_F_ID = 9;
static const byte COUT_F_ID = 10;
static const byte CERR_F_ID = 11;
static const byte CIN_D_ID = 12;
static const byte COUT_D_ID = 13;
static const byte CERR_D_ID = 14;
static std::map<std::string, byte> STDIO_MAP = {
		{"cin", CIN_ID},
		{"cout", COUT_ID},
		{"cerr", CERR_ID},
		{"cin_i", CIN_I_ID},
		{"cout_i", COUT_I_ID},
		{"cerr_i", CERR_I_ID},
		{"cin_l", CIN_L_ID},
		{"cout_l", COUT_L_ID},
		{"cerr_l", CERR_L_ID},
		{"cin_f", CIN_F_ID},
		{"cout_f", COUT_F_ID},
		{"cerr_f", CERR_F_ID},
		{"cin_d", CIN_D_ID},
		{"cout_d", COUT_D_ID},
		{"cerr_d", CERR_D_ID},
};
