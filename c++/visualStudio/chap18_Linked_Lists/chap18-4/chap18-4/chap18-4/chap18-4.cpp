// chap18-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program demonstrates the deleteNode member function.
#include <iostream>
#include "NumberList.h"
using namespace std;

int main()
{
    // Define a NumberList object.
    NumberList list;

    // Build the list with some values.
    list.appendNode(2.5);
    list.appendNode(7.9);
    list.appendNode(12.6);

    // Display the list.
    cout << "Here are the initial values:\n";
    list.displayList();
    cout << endl;

    // Delete the middle node.
    cout << "Now deleting the node in the middle.\n";
    list.deleteNode(7.9);

    // Display the list.
    cout << "Here are the nodes left.\n";
    list.displayList();
    cout << endl;

    // Delete the last node.
    cout << "Now deleting the last node.\n";
    list.deleteNode(12.6);

    // Display the list.
    cout << "Here are the nodes left.\n";
    list.displayList();
    cout << endl;

    // Delete the only node left in the list.
    cout << "Now deleting the only remaining node.\n";
    list.deleteNode(2.5);

    // Display the list.
    cout << "Here are the nodes left.\n";
    list.displayList();
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