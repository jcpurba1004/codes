// unit10-6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class inventory
{
public:
	inventory();
	inventory(string);
	inventory(string, int, double);
	inventory(string, int, double, int);

	//Add additional functions

private:
	string name;
	int itemNum;
	double price;
	int unitsInStock;
};

inventory::inventory() //default constructor
{
	name = n;
	itemNum = -1;
	price = 0.0;
	unitsInStock = 0;
}

inventory::inventory(string n)
{
	name = n;
	itemNum = -1;
	price = 0.0;
	unitsInStock = 0;
}

inventory::inventory(string n, int iNum, double cost)
{
	name = n;
	itemNum = iNum;
	price = cost;
	unitsInStock = 0;
}

inventory::inventory(string n, int iNum, double cost, int inStock)
{
	name = n;
	itemNum = iNum;
	price = cost;
	unitsInStock = inStock;
}

inventory item1;
inventory item2("Dryer");
inventory item3("Washer", 2345, 278.95);
inventory item3("Toaster", 8231 34.49, 200);

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
