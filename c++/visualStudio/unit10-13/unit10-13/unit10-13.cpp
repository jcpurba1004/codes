// unit10-13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "illustrate.h"

using namespace std;

int main()
{
    illustrate illusObject1(3);
    illustrate illusObject1(5);

    illustrate::incrementY();
    illustrate::count++;
    illusObject1.print();
    illusObject2.print();

    cout << "Line 12: ***Increment y using "
         << "illusObject1***" << endl;

    illusObject1::incrementY();
    illusObject1.setX(8);
    illusObject1.print();
    illusObject2.print();

    cout << "Line 17: ***Increment y using "
         << "illusObject2***" << endl;

    illusObject2::incrementY();
    illusObject2.setX(23);
    illusObject1.print();
    illusObject2.print();

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
