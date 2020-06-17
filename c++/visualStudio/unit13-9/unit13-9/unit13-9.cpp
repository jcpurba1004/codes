// unit13-9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Template larger

#include <iostream>
#include "myString.h"

using namespace std;

template <class Type>
Type larger(Type x, Type y);

int main()
{
    cout << "Line 8: Larger of 5 and 6 = "
         << larger(5, 6) << endl;
    cout << "Line 9: Larger of A and B = "
         << larger('A', 'B') << endl;
    cout << "Line 10: Larger of 5.6 and 3.2 = "
         << larger(5.6, 3.2) << endl;

    newString str1 = "Hello";
    newString str2 = "Happy";

    cout << "Line 13: Larger of " << str1 << " and "
         << str2 << " = " << larger(str1, str2)
         << endl;

    return 0;
}

template <class Type>
Type larger(Type x, Type y)
{
    if (x >= y)
        return x;
    else
        return y;
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
