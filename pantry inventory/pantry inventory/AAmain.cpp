//////////
//Elisha Parslow, Justice Martinez, Elizabeth Young
//CS172-1
//Final Project
//Pantry
////////////////

#include <iostream>
#include <string>
#include <fstream>
#include "PANTRY.h"

using namespace std;

void addInventory(pantryCategory p);
void removeInventory(pantryCategory p);
void listPantry(pantryCategory p);
void clearPantry(pantryCategory p);



int main()
{
	
	pantryCategory pantry1;

	FILE categories[8] = { "Beverage.txt", "Bread.txt", "Breakfast.txt", "Dessert.txt", "Fruit.txt",
	"Meat.txt", "Snack.txt", "Vegetables.txt" };

	ofstream *pantry = new ofstream[8];
	

	for (int i = 0; i < 8; i++)
	{
		//pantry[i].open(categories[i]);
	}





	cout << "Welcome to your pantry! These are your options:" << endl << endl;
	cout << "1.) add inventory" << endl;
	cout << "2.) remove inventory" << endl;
	cout << "3.) display your pantry" << endl;
	cout << "4.) empty entire pantry" << endl;
	cout << "Enter the number for the action you would like to complete ";
	int option;
	cin >> option;
	while (option > 4 || option < 1)
	{
		cout << "Not a valid option.  Please choose again ";
		cin >> option; //add if statement to check for symbols and chars
	}

	switch (option % 5)
	{
	case 1: addInventory(pantry1);
		break;
	case 2: removeInventory(pantry1);
		break;
	case 3: listPantry(pantry1);
		break;
	case 4: clearPantry(pantry1);
		break;
	default: break;
	}




	return 0;

}