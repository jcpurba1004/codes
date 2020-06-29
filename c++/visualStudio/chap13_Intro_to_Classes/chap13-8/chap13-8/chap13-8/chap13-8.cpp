// chap13-8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program calls the Rectangle class constructor.
#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;

int main()
{
    double houseWidth,    // To hold the room width
           houseLength;   // To hold the room length

    // Get the width of the house.
    cout << "In feet, how wide is your house? ";
    cin >> houseWidth;

    // Get the length of the house.
    cout << "In feet, how long is your house? ";
    cin >> houseLength;

    // Create a Rectangle object.
    Rectangle house(houseWidth, houseLength);

    // Display the house's width, length and area.
    cout << setprecision(2) << fixed;
    cout << "The house is " << house.getWidth()
         << " feet wide.\n";
    cout << "The house is " << house.getLength()
         << " feet long.\n";
    cout << "The house is " << house.getArea()
         << " square feet in area.\n";
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