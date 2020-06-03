// unit13-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//This program shows how to use the class rectangleType.

#include <iostream>
#include "rectangleType.h"

int main()
{
    rectangleType rectangle1(23, 45);
    rectangleType rectangle2(12, 10);
    rectangleType rectangle3;
    rectangleType rectangle4;

    cout << "Line 10: rectangle1: ";
    rectangle1.print();
    cout << endl;

    cout << "Line 13: rectangle2: ";
    rectangle2.print();
    cout << endl;

    rectangle3 = rectangle1 + rectangle2;

    cout << "Line 17: rectangle3: ";
    rectangle3.print();
    cout << endl;

    rectangle4 = rectangle1 * rectangle2;

    cout << "Line 21: rectangle4: ";
    rectangle4.print();
    cout << endl;

    if (rectangle1 == rectangle2)
        cout << "Line 25: rectangle1 and "
             << "rectangle2 are equal." << endl;
    else
        cout << "Line 27: rectangle1 and "
             << "rectangle2 are not equal."
             << endl;

    if (rectangle1 != rectangle2)
        cout << "Line 29: rectangle1 and "
             << "rectangle3 are not equal." 
             << endl;
    else
        cout << "Line 31: rectangle1 and "
             << "rectangle3 are equal." << endl;

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