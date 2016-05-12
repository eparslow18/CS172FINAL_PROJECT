#include "PANTRY.h"

void clearPantry(pantryCategory* p, vector<string> v) 
{
	
	v.erase(v.begin(), v.end()); //erases contents of vector when user clears pantry
	p->setTotalCount(0); //clears total count of pantry

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
		beverageP = fopen("Beverage.txt", "w+");
		breadP = fopen("Bread.txt", "w+");
		breakfastP = fopen("Breakfast.txt", "w+");
		dessertP = fopen("Dessert.txt", "w+");
		fruitP = fopen("Fruit.txt", "w+");
		meatP = fopen("Meat.txt", "w+");
		snackP = fopen("Snack.txt", "w+");
		vegetableP = fopen("Vegetables.txt", "w+");


		

		cout << "pantry cleared, returning to menu . . . " << endl << endl;
		menu(p, v);
	}
	
	else if (answer == 'n')
	{
		cout << "Back to the menu . . . " << endl << endl;
		menu(p, v);
	}


}