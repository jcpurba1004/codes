// unit14-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Checking division by zero

#include <iostream>

using namespace std;

int main()
{
    int dividend, divisor, quotient;

    cout << "Line 6: Enter the dividend: ";
    cin >> dividend;
    cout << endl;

    cout << "Line 9: Enter the divisor: ";
    cin >> divisor;
    cout << endl;

    if (divisor != 0)
    {
        quotient = dividend / divisor;
        cout << "Line 15: Quotient = " << quotient
             << endl;
    }
    else 
        cout << "Line 18: Cannot divide by zero."
             << endl;

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
