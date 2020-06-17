// unit11-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Accessing protected members of a base class in the derived
//class.

#include <iostream>
#include "protectMembClass.h"
#include "protectMembInDerivedCl.h"
#include "unit11-5.h"

using namespace std;

int main()
{
    bClass bObject;

    dClass dObject;

    bObject.print();
    cout << endl;

    cout << "*** Derived class object ***" << endl;

    dObject.setData('&', 2.5, 7);

    dObject.print();

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