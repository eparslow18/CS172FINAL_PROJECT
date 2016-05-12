
#include "PANTRY.h"

int pantryCategory::totalCount = 0;

pantryCategory::pantryCategory()
{

}

void pantryCategory::vectorOfItems(string i, int checker, int quantity, vector<string> v, pantryCategory* p, FILE* f)
{
	int tracker = 0;
	//vector<string> Vector;
	switch (checker % 4)
	{
	case 1: //called by addNewItem
		for (int j = 0; j < quantity; j++) //appends item to pantry vector based on quantity
		{
			v.push_back(i);
		}
		//Vector = v;
		//for (int m = 0; m < Vector.size(); m++)
		//{
		//	for (int n = m + 1; n < Vector.size(); n++)
		//	{
		//		if (Vector[m] == Vector[n])
		//		{
		//			string temp = Vector[n];
		//			Vector[n] = Vector[m + 1];
		//			Vector[m + 1] = temp;
		//			//swaps contents[n] with contents[m+1] to place similar items next to each other
		//		}
		//	}
		//}
		menu(p, v);
		break;
	case 2: //called by removeItem
	
		for (int j = 0; j < v.size(); j++)
		{
			if (v[j] == i+'\n')
			{
				v.erase(v.begin() + j); //removes item from entire pantry vector
				tracker++;
				p->setTotalCount(p->getTotalCount() - 1); //decreases total count by 1

				//creating a temporary vector for each file to check if item is in that particular 
				//text file.  Then removing from that temporary vector if ther is a match, and 
				//re-reading the new vector (without the removed item) into a blank, recreated text file.
				int  ch;
				char item[100];
				vector<string> Temp;

				fseek(f, 0, SEEK_SET);
				while ((ch = fgetc(f)) != EOF) 
				{
					
					ungetc(ch, f);
					fgets(item, 100, f); //reads in line until end of line or until 100 char.'s is reached in line
					Temp.push_back(item);//adds line to vector
				}
				for (int w = 0; w < Temp.size(); w++)
				{
					if (Temp[w] == i+'\n')
					{
						Temp.erase(Temp.begin() + w);

						if (f == beverageP)
						{
							f = fopen("Beverage.txt", "w+");
						}
						else if (f == breakfastP)
						{
							f = fopen("Breakfast.txt", "w+");
						}
						else if (f == breadP)
						{
							f = fopen("Bread.txt", "w+");
						}
						else if (f == dessertP)
						{
							f = fopen("Dessert.txt", "w+");
						}
						else if (f == fruitP)
						{
							f = fopen("Fruit.txt", "w+");
						}
						else if (f == snackP)
						{
							f = fopen("Snack.txt", "w+");
						}
						else if (f == meatP)
						{
							f = fopen("Meat.txt", "w+");
						}
						else if (f == vegetableP)
						{
							f = fopen("Vegetables.txt", "w+");
						}
						//fputc(' ', f); //puts space before word to properly display in program
						for (int x = 0; x < Temp.size(); x++)
						{
							for (int k = 0; k < Temp[x].length(); k++) //appends each character into the file
							{
								fputc(Temp[x][k], f);
							}
							fputc('\n', f); //end line within text file after each item is inputted
						}
					}
				}
				
				
				cout << i << " was removed." << endl;

				break;
			}
		}
		if (tracker == 0)
			cout << "Item was not found in your pantry." << endl;
		menu(p, v);
		break;
	case 3: //called by listPantry
		cout << "Your pantry contains " << totalCount << " items:" << endl;
		for (int k = 0; k < v.size(); k++)
			cout << v[k] << endl;
		break;
	default:
		break;
	}
	
}
void pantryCategory::addNewItem(string i, int q, FILE *f, vector<string> v, pantryCategory* p)
{
	for (int j = 0; j < q; j++) //loop through quantity of items
	{
		//fputc(' ', f); //puts space before word to properly display in program
		for (int k = 0; k < i.length(); k++) //appends each character into the file
		{
			fputc(i[k], f);
		}
		fputc('\n', f); //end line within text file after each item is inputted
	}
	totalCount = totalCount + q;
	vectorOfItems(i, 1, q, v, p, f);
}
void pantryCategory::removeItem(string i, FILE* f, vector<string> v, pantryCategory* p)
{
	vectorOfItems(i, 2, 1, v, p, f);

}
