// chap20-8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program demonstrates the recursive function
// for displaying the list's nodes in reverse.
#include <iostream>
#include "NumberList.h"
#include "chap20-8.h"
using namespace std;

int main()
{
    const double MAX = 10.0; // Upper limit of values

    // Create a NumberList object.
    NumberList list;

    // Add a series of numbers to the list.
    for (double x = 1.5; x < MAX; x += 1.1)
        list.appendNode(x);

    // Display the values in the list.
    cout << "Here are the values in the list:\n";
    list.displayList();

    // Display the values in reverse order.
    cout << "Here are the values in reverse order:\n";
    list.displayBackwards();
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