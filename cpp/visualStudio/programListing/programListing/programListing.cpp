// programListing.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

    //***********************************************************
    // Author: Jeremiah Purba
    //
    // Program Convert Measurements: This program converts
    // measurements in feet and inches into centimeters using 
    // the formula that 1 inch is equal to 2.54 centimeters.
    //***********************************************************
    //header file
#include <iostream>

using namespace std;

    //named constants
const double CENTIMETERS_PER_INCH = 2.54;
const int INCHES_PER_FOOT = 12;

int main()
{
        //declare variables
    int feet, inches;
    int totalInches;
    double centimeters;

        //Statements: Step 1 - Step 7
    cout << "Enter two integers, one for feet and "
         << "one for inches: ";
    cin >> feet >> inches:
    cout << endl;

    cout << "The numbers you entered are " << feet
         << " for feet and " << inches
         << " for inches. " << endl;

    totalInches = INCHES_PER_FOOT * feet + inches;

    cout << "The total number of inches = "
         << totalInches << endl;

    centimeters = CENTIMETERS_PER_INCH * totalInches;

    cout << "The number of centimeters = "
         << centimeters << endl;

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
