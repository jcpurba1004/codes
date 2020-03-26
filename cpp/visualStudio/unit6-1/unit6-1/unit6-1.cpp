// unit6-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// How to use predefined functions.
#include <iostream>
#include <cmath>
#include <cctype>
#include <iomanip>

using namespace std;

int main()
{
    int num;
    double firstNum, secondNum;
    char ch = 'T';

    cout << fixed << showpoint << setprecision (2)
         << endl;

    cout << "Line 12: Is " << ch
         << " a lowercase letter? "
         << islower(ch) << endl;
    cout << "Line 13: Uppercase a is "
         << static_cast<char>(toupper('a')) << endl;

    cout << "Line 14: 4.5 to the power 6.0 = "
         << pow(4.5, 6.0) << endl;

    cout << "Line 15: Enter two decimal numbers: ";
    cin >> firstNum >> secondNum;
    cout << endl;

    cout << "Line 18: " << firstNum
         << " to the power of " << secondNum
         << " = " << pow(firstNum, secondNum) << endl;

    cout << "Line 19: 5.0 to the power of 4 = "
         << pow(5.0, 4) << endl;

    firstNum = firstNum + pow(3.5, 7.2);
    cout << "Line 21: firstNum = " << firstNum << endl;

    num = -32;
    cout << "Line 23: Absolute value of " << num
         << " = " << abs(num) << endl;

    cout << "Line 24: Square root of 28.00 = "
         << sqrt(28.00) << endl;

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
