// complexType.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//***************************************************************
// Author: Jeremiah Purba
//
// This program shows how to use the class complexType.
//***************************************************************

#include <iostream>
#include "complexType.h"

using namespace std;

int main()
{
    complexType num1(21, 18);
    complexType num2;
    complexType num3;

    cout << "Line 9: Num1 = " << num1 << endl;
    cout << "Line 10: Num2 = " << num2 << endl;

    cout << "Line 11: Enter a complex number "
         << "in the form (a, b): ";
    cin >> num2;
    cout << endl;

    cout << "Line 14: New value of num2 = "
         << num2 << endl;

    num3 = num1 + num2;

    cout << "Line 16: Num3 = " << num3 << endl;

    cout << "Line 17: " << num1 << " + " << num2
         << " = " << num1 + num2 << endl;

    cout << "Line 18: " << num1 << " * " << num2
         << " = " << num1 * num2 << endl;

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
