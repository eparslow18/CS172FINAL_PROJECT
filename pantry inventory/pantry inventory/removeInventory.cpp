
#include "PANTRY.h"

void removeInventory(pantryCategory* p, vector<string> v)
{

	cout << "Of the following categories, from which would you like to remove?" << endl;
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
	
	string item = "";

	switch (choice % 9)
	{
	case 1:
		p = new Beverage;
		cout << "enter a beverage to remove: ";
		cin.ignore(); //clears the cin buffer
		getline(cin, item);
		p->removeItem(item, beverageP, v, p);
		break;
	case 2:
		p = new Bread;
		cout << "enter a bread to remove: ";
		cin.ignore(); //clears the cin buffer
		getline(cin, item);
		p->removeItem(item, breadP, v, p);
		break;
	case 3:
		p = new Breakfast;
		cout << "enter a breakfast to remove: ";
		cin.ignore(); //clears the cin buffer
		getline(cin, item);
		p->removeItem(item, breakfastP, v, p);
		break;
	case 4:
		p = new Dessert;
		cout << "enter a dessert to remove: ";
		cin.ignore(); //clears the cin buffer
		getline(cin, item);
		p->removeItem(item, dessertP, v, p);
		break;
	case 5:
		p = new Fruit;
		cout << "enter a fruit to remove: ";
		cin.ignore(); //clears the cin buffer
		getline(cin, item);
		p->removeItem(item, fruitP, v, p);
		break;
	case 6:
		p = new Meat;
		cout << "enter a meat to remove: ";
		cin.ignore(); //clears the cin buffer
		getline(cin, item);
		p->removeItem(item, meatP, v, p);
		break;
	case 7:
		p = new Snack;
		cout << "enter a snack to remove: ";
		cin.ignore(); //clears the cin buffer
		getline(cin, item);
		p->removeItem(item, snackP, v, p);
		break;
	case 8:
		p = new Vegetables;
		cout << "enter a vegetable to remove: ";
		cin.ignore(); //clears the cin buffer
		getline(cin, item);
		p->removeItem(item, vegetableP, v, p);
		break;
	default: break;
	}
	p = NULL;
	menu(p, v);
}