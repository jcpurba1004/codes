// chap20-7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program counts the nodes in a list.
#include <iostream>
#include "NumberList.h"
using namespace std;

int main()
{
    const int MAX = 10;  // Maximum number of values

    // Define a NumberList object.
    NumberList list;

    // Build the list with a series of numbers.
    for (int x = 0; x < MAX; x++)
        list.insertNode(x);

    // Display the number of nodes in the list.
    cout << "The number of nodes is "
         << list.numNodes() << endl;
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