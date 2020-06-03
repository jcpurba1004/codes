// unit13-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Chapter 13: this pointer illustration

#include <iostream>
#include <iomanip>
#include "rectangleType.h"
#include "unit13-2.h"

using namespace std;

int main()
{
    rectangleType oldYard(20.00, 10.00);
    rectangleType newYard;

    cout << fixed << showpoint << setprecision(2);
    cout << "Line 10: Area of oldYard = "
         << oldYard.area() << endl;

    newYard = oldYard.doubleDimensions();

    cout << "Line 12: Area of newYard = "
         << newYard.area() << endl;

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
