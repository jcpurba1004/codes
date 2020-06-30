// chap13-13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program demonstrates a class with overloaded constructors.
#include <iostream>
#include <iomanip>
#include "InventoryItem.h"

int main()
{
    // Create an InventoryItem object with constructor #1.
    InventoryItem item1;
    item1.setDescription("Hammer");   // Set the description
    item1.setCost(6.95);              // Set the cost
    item1.setUnits(12);               // Set the units

    // Create an InventoryItem object with constructor #2.
    InventoryItem item2("Pliers");

    // Create an InventoryItem object with constructor #3.
    InventoryItem item3("Wrench", 8.75, 20);

    cout << "The following items are in inventory:\n";
    cout << setprecision(2) << fixed << showpoint;

    // Display the data for item 1.
    cout << "Description: " << item1.getDescription() << endl;
    cout << "Cost: $" << item1.getCost() << endl;
    cout << "Units on Hand: " << item1.getUnits() << endl << endl;

    // Display the data for item 2.
    cout << "Description: " << item2.getDescription() << endl;
    cout << "Cost: $" << item2.getCost() << endl;
    cout << "Units on Hand: " << item2.getUnits() << endl << endl;

    // Display the data for item 3.
    cout << "Description: " << item3.getDescription() << endl;
    cout << "Cost: $" << item3.getCost() << endl;
    cout << "Units on Hand: " << item3.getUnits() << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file