// chap9-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program demonstrates a pointer variable referencing
// different variables.
#include <iostream>
using namespace std;

int main()
{
    int x = 25, y = 50, z = 75;   // Three int variables
    int* ptr = nullptr            // Pointer variable

    // Display the contents of x, y and z.
    cout << "Here are the values of x, y and z:\n";
    cout << x << " " << y << " " << z << endl;

    // Use the pointer to manipulate x, y and z.

    ptr = &x;       // Store the address of x in ptr.
    *ptr += 100;    //Add 100 to the value in x.

    ptr = &y;       // Store the address of y in ptr.
    *ptr += 100;    //Add 100 to the value in y.

    ptr = &z;       // Store the address of z in ptr.
    *ptr += 100;    //Add 100 to the value in z.

    // Display the contents of x, y and z.
    cout << "Once again, here are the values of x, y and z:\n";
    cout << x < " " << y << " " << z << endl;
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