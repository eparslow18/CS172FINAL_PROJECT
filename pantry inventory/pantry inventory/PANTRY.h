
#ifndef PANTRY_H_
#define PANTRY_H_
#include <string>
#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

class pantryCategory
{
private:
	static int totalCount;  //Used for entire pantry
public:
	pantryCategory(); //parameters could use inheritance
	void vectorOfItems(string i, int checker, int quantity, vector<string> v, pantryCategory* p, FILE* f);
	void addNewItem(string i, int q, FILE* f, vector<string> v, pantryCategory* p);
	void removeItem(string i, FILE* f, vector<string> v, pantryCategory* p);
	void setTotalCount(int count) { totalCount = count; }
	int getTotalCount() { return totalCount; }

	//Stuff added by prof bell --- figure it out and delete later
	
	virtual string getItem() = 0;
};

class Beverage : public pantryCategory
{
private:
	string bevItem;
	//Delete below here --- added by Prof M
public:
	string getItem() { return bevItem; }
};

class Bread : public pantryCategory
{
private:
	string breadItem;
public:
	string getItem() { return breadItem; }
};

class Breakfast : public pantryCategory
{
private:
	string breakItem;
public:
	string getItem() { return breakItem; }
};

class Dessert : public pantryCategory
{
private:
	string dessItem;
public:
	string getItem() { return dessItem; }
};

class Fruit : public pantryCategory
{
private:
	string fruitItem;
public:
	string getItem() { return fruitItem; }
};

class Meat : public pantryCategory
{
private:
	string meatItem;
public:
	string getItem() { return meatItem; }
};

class Snack : public pantryCategory
{
private:
	string snackItem;
public:
	string getItem() { return snackItem; }
};

class Vegetables : public pantryCategory
{
private:
	string vegItem;
public:
	string getItem() { return vegItem; }
};



void addInventory(pantryCategory* p, vector<string> v);
void removeInventory(pantryCategory* p, vector<string> v);
void listPantry(pantryCategory* p, vector<string> v);
void clearPantry(pantryCategory* p, vector<string> v);
void menu(pantryCategory* p, vector<string> v);


//This declares pointers to each food group file, and makes it external so it is accessible through the entire program
extern FILE *beverageP;
extern FILE *breadP;
extern FILE *breakfastP;
extern FILE *dessertP;
extern FILE *meatP;
extern FILE *snackP;
extern FILE *vegetableP;
extern FILE *fruitP;


#endif