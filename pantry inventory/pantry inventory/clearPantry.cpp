#include "PANTRY.h"

void clearPantry(pantryCategory p)
{

	cout << "Are you sure you would you like to clear the pantry?" << endl;
	cout << "y for yes, n for no: ";
	char answer;
	cin >> answer;
	while (answer != 'y' && answer != 'n' && answer != 'Y' && answer != 'N')
	{
		cout << "invalid input. Please enter y for yes, n for no: ";
		cin >> answer;
	}

	tolower(answer);

	if (answer == 'y')
	{
		fflush(beverageP); //what the hell
		remove("Bread.txt");
		remove("Breakfast.txt");
		remove("Dessert.txt");
		remove("Fruit.txt");
		remove("Meat.txt");
		remove("Snack.txt");
		remove("Vegetables.txt");
		

		cout << "pantry cleared, returning to menu . . . " << endl << endl;
		menu(p);
	}
	
	else if (answer == 'n')
	{
		cout << "Back to the menu . . . " << endl << endl;
		menu(p);
	}


}