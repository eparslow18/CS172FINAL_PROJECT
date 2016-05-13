

#include "PANTRY.h"

void addInventory(pantryCategory* p, vector<string> v)
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

	//To check for symbols and chars, or numbers outside the parameters of the options
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Not a valid option.  Please choose again ";
		cin >> choice;

	}

	while (choice > 8 || choice < 1)
	{
		cout << "Not a valid option.  Please choose again ";
		cin >> choice;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Not a valid option.  Please choose again ";
			cin >> choice;
		}

	}


	int quantity;
	string item;

	switch (choice % 9)
	{
	case 1:
		p = new Beverage;
		cout << "enter a beverage: ";
		cin.ignore(); //clears the cin buffer
		getline(cin, item);
		cout << "Enter the quantity of item you would like to add: ";
		cin >> quantity; //loop to check for symbols and chars
		p->addNewItem(item, quantity, beverageP, v, p);
		break;
	case 2: 
		p = new Bread;
		cout << "enter a bread: ";
		cin.ignore(); //clears the cin buffer
		getline(cin, item);
		cout << "Enter the quantity of item you would like to add: ";
		cin >> quantity; //loop to check for symbols and chars
		p->addNewItem(item, quantity, breadP, v, p);
		break;
	case 3: 
		p = new Breakfast;
		cout << "enter a breakfast: ";
		cin.ignore(); //clears the cin buffer
		getline(cin, item);
		cout << "Enter the quantity of item you would like to add: ";
		cin >> quantity; //loop to check for symbols and chars
		p->addNewItem(item, quantity, breakfastP, v, p);
		break;
	case 4: 
		p = new Dessert;
		cout << "enter a dessert: ";
		cin.ignore(); //clears the cin buffer
		getline(cin, item);
		cout << "Enter the quantity of item you would like to add: ";
		cin >> quantity; //loop to check for symbols and chars
		p->addNewItem(item, quantity, dessertP, v, p);
		break;
	case 5: 
		p = new Fruit;
		cout << "enter a fruit: ";
		cin.ignore(); //clears the cin buffer
		getline(cin, item);
		cout << "Enter the quantity of item you would like to add: ";
		cin >> quantity; //loop to check for symbols and chars
		p->addNewItem(item, quantity, fruitP, v, p);
		break;
	case 6: 
		p = new Meat;
		cout << "enter a meat: ";
		cin.ignore(); //clears the cin buffer
		getline(cin, item);
		cout << "Enter the quantity of item you would like to add: ";
		cin >> quantity; //loop to check for symbols and chars
		p->addNewItem(item, quantity, meatP, v, p);
		break;
	case 7: 
		p = new Snack;
		cout << "enter a snack: ";
		cin.ignore(); //clears the cin buffer
		getline(cin, item);
		cout << "Enter the quantity of item you would like to add: ";
		cin >> quantity; //loop to check for symbols and chars
		p->addNewItem(item, quantity, snackP, v, p);
		break;
	case 8: 
		p = new Vegetables;
		cout << "enter a vegetable: ";
		cin.ignore(); //clears the cin buffer
		getline(cin, item);
		cout << "Enter the quantity of item you would like to add: ";
		cin >> quantity; //loop to check for symbols and chars
		p->addNewItem(item, quantity, vegetableP, v, p);
		break;
	default: break;
	}

	p = NULL; //redeclares the pantry class pointer back to NULL before menu called again
	menu(p, v);
}