
#include "PANTRY.h"

int pantryCategory::totalCount = 0;

pantryCategory::pantryCategory()
{

}

//template <typename T>
void pantryCategory::vectorOfItems(pantryCategory* p)
{
	//vector<&p> items;
}
void pantryCategory::addNewItem(string i, int q, FILE *f)
{
	for (int j = 0; j < q; j++) //loop through quantity of items
	{
		for (int k = 0; k < i.length(); k++) //appends each character into the file
		{
			fputc(i[k], f);
		}
		fputc('\n', f); //end line within text file after each item is inputted
	}
	totalCount = totalCount + q;
}
void pantryCategory::removeItem(string i, FILE* f, pantryCategory* p)
{
	vectorOfItems(p);
	//cout << you have ___ of item, how many would you like to remove?
	cout << "Enter the quantity of items you would like to remove: ";
	int quantity;
	cin >> quantity; //loop to check for symbols and chars
}
