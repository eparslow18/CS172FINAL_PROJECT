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

//continued part of the syntax for declaring the external pointers to the files we will be accessing
FILE *beverageP;
FILE *breadP;
FILE *breakfastP;
FILE *dessertP;
FILE *meatP;
FILE *snackP;
FILE *vegetableP;
FILE *fruitP;

bool flag = false; //to read all contents of each file into the pantry vector each time the program is opened, bool is to ensure
//this is only done once (not every time menu is called)

void menu(pantryCategory* p, vector<string> v)
{
	cout << endl << "*****MENU*****" << endl << endl;
	beverageP = fopen("Beverage.txt", "a+");
	breadP = fopen("Bread.txt", "a+");
	breakfastP = fopen("Breakfast.txt", "a+");
	dessertP = fopen("Dessert.txt", "a+");
	fruitP = fopen("Fruit.txt", "a+");
	meatP = fopen("Meat.txt", "a+");
	snackP = fopen("Snack.txt", "a+");
	vegetableP = fopen("Vegetables.txt", "a+");

	if (flag == false)
	{
		int  ch;
		char item[100];
		
		while((ch = fgetc(beverageP)) != EOF)
		{
			ungetc(ch, beverageP);
			fgets(item, 100, beverageP); //reads in line until end of line or until 100 char.'s is reached in line
			v.push_back(item);//adds line to vector
			p->setTotalCount(p->getTotalCount() + 1); //increases totalCount for each item found in files
		}
		while ((ch = fgetc(breadP)) != EOF)
		{
			ungetc(ch, breadP);
			fgets(item, 100, breadP);
			v.push_back(item);
			p->setTotalCount(p->getTotalCount() + 1); //increases totalCount for each item found in files
		}
		while ((ch = fgetc(breakfastP)) != EOF)
		{
			ungetc(ch, breakfastP);
			fgets(item, 100, breakfastP);
			v.push_back(item);
			p->setTotalCount(p->getTotalCount() + 1); //increases totalCount for each item found in files
		}
		while ((ch = fgetc(dessertP)) != EOF)
		{
			ungetc(ch, dessertP);
			fgets(item, 100, dessertP);
			v.push_back(item);
			p->setTotalCount(p->getTotalCount() + 1); //increases totalCount for each item found in files
		}
		while ((ch = fgetc(fruitP)) != EOF)
		{
			ungetc(ch, fruitP);
			fgets(item, 100, fruitP);
			v.push_back(item);
			p->setTotalCount(p->getTotalCount() + 1); //increases totalCount for each item found in files
		}
		while ((ch = fgetc(meatP)) != EOF)
		{
			ungetc(ch, meatP);
			fgets(item, 100, meatP);
			v.push_back(item);
			p->setTotalCount(p->getTotalCount() + 1); //increases totalCount for each item found in files
		}
		while ((ch = fgetc(snackP)) != EOF)
		{
			ungetc(ch, snackP);
			fgets(item, 100, snackP);
			v.push_back(item);
			p->setTotalCount(p->getTotalCount() + 1); //increases totalCount for each item found in files
		}
		while ((ch = fgetc(vegetableP)) != EOF)
		{
			ungetc(ch, vegetableP);
			fgets(item, 100, vegetableP);
			v.push_back(item);
			p->setTotalCount(p->getTotalCount() + 1); //increases totalCount for each item found in files
		}
		flag = true;
	}

		cout << "1.) add inventory" << endl;
		cout << "2.) remove inventory" << endl;
		cout << "3.) display your pantry" << endl;
		cout << "4.) empty entire pantry" << endl;
		cout << "5.) exit pantry program" << endl;
		cout << "Enter the number for the action you would like to complete ";

		int option;
		cin >> option;

		//To check for symbols and chars, or numbers outside the parameters of the options
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Not a valid option.  Please choose again ";
			cin >> option;
			
		}

		while (option > 5 || option < 1)
		{
			cout << "Not a valid option.  Please choose again ";
			cin >> option; 
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Not a valid option.  Please choose again ";
				cin >> option;
			}
			
		}
		switch (option % 6)
		{
		case 1: addInventory(p, v);
			break;
		case 2: removeInventory(p, v);
			break;
		case 3: listPantry(p, v);
			break;
		case 4: clearPantry(p, v);
			break;
		case 5: 
			//closes all files and ends program from here
			fclose(beverageP);
			fclose(breadP);
			fclose(breakfastP);
			fclose(fruitP);
			fclose(dessertP);
			fclose(meatP);
			fclose(snackP);
			fclose(vegetableP);

			cout << "End of program." << endl;
			exit(0);
			break;
		default: break;
		}
	
}
int main()
{
	static vector<string> contents; //vector of pantry contents
	
	pantryCategory* pantry1 = NULL; //Declaring the pantry
	
	cout << "Welcome to your pantry! These are your options:" << endl << endl;
	
	menu(pantry1, contents); //menu is called at the end of nearly all functions, passing the same parameters
	
	return 0;
}