// unit7-9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program unsafely accesses an area of memory by writing
// values beyond an array's boundary.
// WARNING: If you compile and run this program, it could crash.
#include <iostream>
#include "unit7-9.h"
using namespace std;

int main()
{
    const int SIZE = 3;  // Constant for the array size
    int values[SIZE];    // An array of 3 integers
    int count;           // Loop counter variable

    // Attempt to store five numbers in the 3-element array.
    cout << "I will store 5 numbers in a 3-element array!\n";
    for (count = 0; count < 5; count++)
        values[count] = 100;

    // If the program is still running, display the numbers.
    cout << "If you see this message, it means the program\n";
    cout << "has not crashed! Here are the numbers:\n";
    for (count = 0; count < 5; count++)
        cout << values[count] << endl;
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