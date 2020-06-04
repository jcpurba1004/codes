// unit14-13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Handling exception thrown by a function.

#include <iostream>
#include "divisionByZero.h"

using namespace std;

void doDivision();

int main()
{
    doDivision();

    return 0;
}

void doDivision()
{
    int dividend, divisor, quotient;

    try
    {
        cout << "Line 15: Enter the dividend: ";
        cin >> dividend;
        cout << endl;

        cout << "Line 18: Enter the divisor: ";
        cin >> divisor;
        cout << endl;

        if (divisor == 0)
            throw divisionByZero();

        quotient = dividend / divisor;
        cout << "Line 24: Quotient = " << quotient
             << endl;
    }
    catch (divisionByZero divByZeroObj)
    {
        cout << "Line 28: In the function "
             << "doDivision: "
             << divByZeroObj.what() << endl;
    }
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
