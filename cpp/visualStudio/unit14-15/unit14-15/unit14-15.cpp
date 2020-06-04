// unit14-15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Handling exception, in the main function, thrown  by another
// function. The function throws the same exception object.

#include <iostream>
#include "divisionByZero"

using namespace std;

void doDivision() throw (divisionByZero);

int main()
{
    try
    {
        doDivision();
    }
    catch (divisionByZero divByZeroObj)
    {
        cout << "Line 13: In main: "
             << divByZeroObj.what() << endl;
    }

    return 0;
}

void doDivision() throw (divisionByZero)
{
    int dividend, divisor, quotient;

    try
    {
        cout << "Line 22: Enter the dividend: ";
        cin >> dividend;
        cout << endl;

        cout << "Line 25: Enter the divisor: ";
        cin >> divisor;
        cout << endl;

        if (divisor == 0)
            throw
            divisionByZero("Found division by 0!");

        quotient = dividend / divisor;
        cout << "Line 31: Quotient = " << quotient
             << endl;
    }
    catch (divisionByZero)
    {
        throw;
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
