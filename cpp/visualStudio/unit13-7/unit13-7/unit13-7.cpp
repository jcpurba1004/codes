// unit13-7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//This program shows how to use the modified class rectangleType.

#include <iostream>

#include "rectangleType.h"

using namespace std;

int main()
{
    rectangleType myRectangle(23, 45);
    rectangleType yourRectangle;

    cout << "Line 8: myRectangle: " << myRectangle
         << endl;

    cout << "Line 9: Enter the length and width "
         << "of a rectangle: ";

    cin >> yourRectangle
    cout << endl;

    cout << "Line 12: yourRectangle: "
         << yourRectangle << endl;

    cout << "Line 13: myRectangle + yourRectangle: "
         << myRectangle +  yourRectangle << endl;
    cout << "Line 14: myRectangle * yourRectangle: "
         << myRectangle * yourRectangle << endl;

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
