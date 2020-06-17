// unit6-12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Example 6-12: Program illustrating how a value parameter works.

#include <iostream>

using namespace std;

void funcValueParam(int num);

int main()
{
    int number = 6;

    cout << "Line 7: Before calling the function "
         << "funcValueParam, number = " << number
         << endl;

    funcValueParam(number);

    cout << "Line 9: After calling the function "
         << "funcValueParam, number = " << number
         << endl;

    return 0;
}

void funcValueParam(int num)
{
    cout << "Line 14: In the function funcValueParam, "
         << "before changing, num = " << num
         << endl;

    num = 15;

    cout << "Line 16: In the function funcValueParam, "
        << "after changing, num = " << num
        << endl;
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
