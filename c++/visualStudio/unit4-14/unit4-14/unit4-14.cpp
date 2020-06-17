// unit4-14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Chapter 4: Example 4-14
//Program tp determine if additional charges are applicable on
//a suitcase accompanying a passenger on an economy flight.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double suitcaseDimension;
    double suitcaseWeight;
    double additionalCharges = 0.0;

    cout << fixed << showpoint << setprecision(2);
    cout << "Line 10: Enter suitcase dimensions "
         << "(length + width + depth) in inches: ";
    cin >> suitcaseDimension;
    cout << endl;

    cout << "Line 13: Enter suitcase weight in pounds: ";
    cin >> suitcaseWeight; 
    cout << endl;
    if (suitcaseDimension > 108 || suitcaseWeight > 50)
        additionalCharges = 50.00;

    cout << "Line 18: Additional suitcase charges: $"
          << additionalCharges << endl;

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
