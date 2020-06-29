// chap13-14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program demonstrates an array of class objects.
#include <iostream>
#include <iomanip>
#include "InventoryItem.h"
using namespace std;

int main()
{
    const int NUM_ITEMS = 5;
    InventoryItem inventory[NUM_ITEMS] = {
                   InventoryItem("Hammer", 6.95, 12),
                   InventoryItem("Wrench", 8.75, 20),
                   InventoryItem("Pliers", 3.75, 10),
                   InventoryItem("Ratchet", 7.95, 14),
                   InventoryItem("Screwdriver", 2.50, 22) };

    cout << setw(14) <<"Inventory Item"
         << setw(8) << "Cost" << setw(8)
         << setw(16) << "Units on Hand\n";
    cout << "--------------------------------------\n";

    for (int i = 0; i < NUM_ITEMS; i++)
    {
        cout << setw(14) << inventory[i].getDescription();
        cout << setw(8) << inventory[i].getCost();
        cout << setw(7) << inventory[i].getUnits() << endl;
    }

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