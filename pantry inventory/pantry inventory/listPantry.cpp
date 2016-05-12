#include "PANTRY.h"

void listPantry(pantryCategory* p, vector<string> v)
{
	FILE* f = NULL; //creates blank file for the sake of passing proper parameters
	p->vectorOfItems("", 3, 0, v, p, f);
	menu(p, v);
}