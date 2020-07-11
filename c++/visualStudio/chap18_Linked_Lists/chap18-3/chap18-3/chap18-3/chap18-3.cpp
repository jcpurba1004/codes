// chap18-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program demonstrates the insertNode member function.
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

    // Insert a node in the middle of the list.
    list.insertNode(10.5);

    // Display the list
    list.displayList();
    return 0;
}