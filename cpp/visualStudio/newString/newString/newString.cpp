// newString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//**************************************************************
// Author: Jeremiah Purba
//
// This program shows how to use the class newString
//**************************************************************

#include <iostream>
#include "myString.h"

using namespace std;

int main()
{
    newString str1 = "Sunny";

    const newString str2("Warm");

    newString str3;

    newString str4;


    cout << "Line 10: " << str1 << "   " << str2
         << "  ***" << str3 << "###." << endl;

    if (str1 <= str2)
        cout << "Line 12: " << str1 << " is less "
             << "than or equal to " << str2 << endl;
    else
        cout << "Line 14: " << str2 << " is less "
             << "than " << str1 << endl;

    cout << "Line 15: Enter a string with a length "
         << "of at least 7: ";
    cin >> str1;
    cout << endl;

    cout << "Line 18: The new value of "
         << "str1 = " << str1 << endl;

    str4 = str3 = "Birth Day";

    cout << "Line 20: str3 = " << str3
         << ", str4 = " << str4 << endl;

    str3 = str1;
    cout << "Line 22: The new value of str3 = "
         << str3 << endl;

    str1 = "Bright Sky";

    str3[1] = str1[5];
    cout << "Line 25: After replacing the second "
         << "character of str3 = " << str3 << endl;

    str3[2] = str1[0];
    cout << "Line 27: After replacing the third "
         << "character of str3 = " << str3 << endl;

    str3[5] = 'g';
    cout << "Line 29: After replacing the sixth "
         << "character of str3 = " << str3 << endl;

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
