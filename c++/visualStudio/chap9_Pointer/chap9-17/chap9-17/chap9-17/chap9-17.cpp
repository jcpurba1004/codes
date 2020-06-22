// chap9-17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program demonstrates a unique_ptr.
#include <iostream>
#include <memory>
using namespace std;

int main()
{
    // Define a unique_ptr smart pointer, pointing
    // to a dynamically allocated int.
    unique_ptr<int> ptr( new int );

    // Assign 99 to the dynamically allocated int.
    *ptr = 99;

    // Display the value of the dynamically allocated int.
    cout << *ptr << endl;
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