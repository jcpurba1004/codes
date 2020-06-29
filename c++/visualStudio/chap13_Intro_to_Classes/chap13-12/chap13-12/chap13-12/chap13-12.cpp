// chap13-12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program demonstrates a class with a destrutor.
#include <iostream>
#include "ContactInfo.h"
using namespace std;

int main()
{
    // Define a ContactInfo object with the following data:
    // Name: Kristen Lee, Phone Number: 555-2021
    ContactInfo entry("Kristen Lee", "555-2021");

    // Display the object's data.
    cout << "Name: " << entry.getName() << endl;
    cout << "Phone Number: " << entry.getPhoneNumber() << endl;
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