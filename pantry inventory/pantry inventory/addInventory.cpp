#include "PANTRY.h"

void addInventory(pantryInventory p)
{
	
	cout << "Of the following categories, which would you like to add to?" << endl;
	cout << "1.) Beverage" << endl;
	cout << "2.) Bread" << endl;
	cout << "3.) Breakfast" << endl;
	cout << "4.) Dessert" << endl;
	cout << "5.) Fruit" << endl;
	cout << "6.) Meat" << endl;
	cout << "7.) Snack" << endl;
	cout << "8.) Vegetables" << endl;
	cout << "Enter the number corresponding to the option you want: ";
	int choice;
	cin >> choice;
	while (choice > 8 || choice < 1)
	{
		cout << "Not a valid option.  Please choose again ";
		cin >> choice; //add if statement to check for symbols and chars
	}

	switch (choice % 9)
	{
	case 1:; //p.addNewItem(Category Beverage)
		break;
	case 2: ;
		break;
	case 3: ;
		break;
	case 4: ;
		break;
	case 5: ;
		break;
	case 6: ;
		break;
	case 7: ;
		break;
	case 8: ;
		break;
	default: break;
	}

}