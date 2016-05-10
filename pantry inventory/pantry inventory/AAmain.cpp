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

FILE *beverageP;
FILE *breadP;
FILE *breakfastP;
FILE *dessertP;
FILE *meatP;
FILE *snackP;
FILE *vegetableP;
FILE *fruitP;

void menu(pantryCategory* p)
{
	cout << endl << endl << "*****MENU*****" << endl << endl;
	beverageP = fopen("Beverage.txt", "a+");
	breadP = fopen("Bread.txt", "a+");
	breakfastP = fopen("Breakfast.txt", "a+");
	dessertP = fopen("Dessert.txt", "a+");
	fruitP = fopen("Fruit.txt", "a+");
	meatP = fopen("Meat.txt", "a+");
	snackP = fopen("Snack.txt", "a+");
	vegetableP = fopen("Vegetables.txt", "a+");

	cout << "1.) add inventory" << endl;
	cout << "2.) remove inventory" << endl;
	cout << "3.) display your pantry" << endl;
	cout << "4.) empty entire pantry" << endl;
	cout << "5.) exit pantry program" << endl;
	cout << "Enter the number for the action you would like to complete ";

	int option;
	cin >> option;

	while (option > 5 || option < 1)
	{
		cout << "Not a valid option.  Please choose again ";
		cin >> option; //add if statement to check for symbols and chars
	}
	switch (option % 6)
	{
	case 1: addInventory(p);
		break;
	case 2: removeInventory(p);
		break;
	case 3: listPantry(p);
		break;
	case 4: clearPantry(p);
		break;
	case 5: return;
		break;
	default: break;
	}

}

int main()
{
	
	pantryCategory* pantry1 = NULL;
	
	cout << "Welcome to your pantry! These are your options:" << endl << endl;
	
	menu(pantry1);


	fclose(beverageP);
	fclose(breadP);
	fclose(breakfastP);
	fclose(fruitP);
	fclose(dessertP);
	fclose(meatP);
	fclose(snackP);
	fclose(vegetableP);

	cout << "End of program." << endl;

	return 0;
}