// unit13-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Test Program: class reactangleType

#include <iostream>
#include <iomanip>
#include "rectangleType.h"

using namespace std;

int main()
{
    rectangleType myRectangle;
    rectangleType yourRectangle;

    cout << fixed << showpoint << setprecision(2);
    myRectangle.setLength(15.25).setWidth(12.00);

    cout << "Line 11 -- myRectangle: ";
    myRectangle.print();
    cout << endl;

    yourRectangle.setLength(18.50);

    cout << "Line 15 -- yourRectangle: ";
    yourRectangle.print();
    cout << endl;

    yourRectangle.setWidth(7.50);

    cout << "Line 19 -- yourRectangle: ";
    yourRectangle.print();
    cout << endl;

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
