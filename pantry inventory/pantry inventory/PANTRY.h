
#ifndef PANTRY_H_
#define PANTRY_H_
#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;




class pantryCategory
{
private:
	int totalCount;  //Used for entire pantry
	string universalItem; //Used for entire pantry
public:
	pantryCategory(); //parameters could use inheritance
	void addItemCount();
	void addNewItem(const pantryCategory& p, string i); //use polymorphism
	void removeItem();
};

class Beverage : public pantryCategory
{
private:
	int bevCount;
	string bevItem;
};

class Bread : public pantryCategory
{
private:
	int breadCount;
	string breadItem;
};

class Breakfast : public pantryCategory
{
private:
	int breakCount;
	string breakItem;
};

class Dessert : public pantryCategory
{
private:
	int dessCount;
	string dessItem;
};

class Fruit : public pantryCategory
{
private:
	int fruitCount;
	string fruitItem;
};

class Meat : public pantryCategory
{
private:
	int meatCount;
	string meatItem;
};

class Snack : public pantryCategory
{
private:
	int snackCount;
	string snackItem;
};

class Vegetables : public pantryCategory
{
private:
	int vegCount;
	string vegItem;
};



void addInventory(pantryCategory p);
void removeInventory(pantryCategory p);
void listPantry(pantryCategory p);
void clearPantry(pantryCategory p);
void menu(pantryCategory p);

extern FILE *beverageP;
extern FILE *breadP;
extern FILE *breakfastP;
extern FILE *dessertP;
extern FILE *meatP;
extern FILE *snackP;
extern FILE *vegetableP;
extern FILE *fruitP;

#endif