

#include "PANTRY.h"

void addInventory(pantryCategory p)
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
	Beverage bev;
	Bread bread;
	Breakfast bfast;
	Dessert yum;
	Fruit fruit;
	Meat meat;
	Snack snack;
	Vegetables veg;
	string item;

	switch (choice % 9)
	{
	case 1: cout << "enter a beverage: ";
		cin >> item;
		p.addNewItem(bev, item);
		break;
	case 2: cout << "enter a bread: ";
		cin >> item;
		p.addNewItem(bread, item);
		break;
	case 3: cout << "enter a breakfast: ";
		cin >> item;
		p.addNewItem(bfast, item);;
		break;
	case 4: cout << "enter a dessert: ";
		cin >> item;
		p.addNewItem(yum, item);;
		break;
	case 5: cout << "enter a fruit: ";
		cin >> item;
		p.addNewItem(fruit, item);;
		break;
	case 6: cout << "enter a meat: ";
		cin >> item;
		p.addNewItem(meat, item);;
		break;
	case 7: cout << "enter a snack: ";
		cin >> item;
		p.addNewItem(snack, item);;
		break;
	case 8: cout << "enter a vegetable: ";
		cin >> item;
		p.addNewItem(veg, item);;
		break;
	default: break;
	}

}