
#ifndef PANTRY_H_
#define PANTRY_H_
#include <string>
#include <iostream>
using namespace std;

template <typename Category>
class pantryCategory
{
private:
	int totalCount;  //Used for entire pantry
	string universalItem; //Used for entire pantry
public:
	pantryCategory(); //parameters could use inheritance
	void addItemCount();
	void addNewItem();
	void removeItem();
	void totalInventory();
	void inventoryByCategory();
};

class Beverage
{

};


#endif