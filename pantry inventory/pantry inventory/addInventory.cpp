

#include "PANTRY.h"

void addInventory(pantryCategory* p)
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
	cout << "Enter the quantity of item you would like to add: ";
	int quantity;
	cin >> quantity; //loop to check for symbols and chars
	string item;

	switch (choice % 9)
	{
	case 1:
		p = new Beverage;
		cout << "enter a beverage: ";
		getline(cin, item);
		p->addNewItem(item, quantity, beverageP);
		break;
	case 2: 
		p = new Bread;
		cout << "enter a bread: ";
		getline(cin, item);
		p->addNewItem(item, quantity, breadP);
		break;
	case 3: 
		p = new Breakfast;
		cout << "enter a breakfast: ";
		getline(cin, item);
		p->addNewItem(item, quantity, breakfastP);
		break;
	case 4: 
		p = new Dessert;
		cout << "enter a dessert: ";
		getline(cin, item);
		p->addNewItem(item, quantity, dessertP);
		break;
	case 5: 
		p = new Fruit;
		cout << "enter a fruit: ";
		getline(cin, item);
		p->addNewItem(item, quantity, fruitP);
		break;
	case 6: 
		p = new Meat;
		cout << "enter a meat: ";
		getline(cin, item);
		p->addNewItem(item, quantity, meatP);
		break;
	case 7: 
		p = new Snack;
		cout << "enter a snack: ";
		getline(cin, item);
		p->addNewItem(item, quantity, snackP);
		break;
	case 8: 
		p = new Vegetables;
		cout << "enter a vegetable: ";
		getline(cin, item);
		p->addNewItem(item, quantity, vegetableP);
		break;
	default: break;
	}
	p = NULL;
	menu(p);

}