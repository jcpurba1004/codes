// c++Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//***************************************************************
// Author: Jeremiah Purba
//
// This program shows where the include statements, using
// statement, named constants, variable declarations, assignment
// statements, and input and output statements typically appear.
//***************************************************************

#include <iostream>

using namespace std;

cost int NUMBER = 12;

int main()
{
    int firstNum;
    int secondNum;

    firstNum = 18;
    cout << "Line 9: firstNum = " << firstNum
         << endl;

    cout << "Line 10: Enter an integer: ";
    cin >> secondNum;
    cout << endl;

    cout << "Line 13: secondNum = " << secondNum
         << endl;

    firstNum = firstNum + NUMBER + 2 * secondNum;

    cout << "Line 15: The new value of "
         << "firstNum = " << firstNum << endl;

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
