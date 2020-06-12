// unit6-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program has two functions:main and displayMessage
#include <iostream>
using namespace std;

//*****************************************
// Definition of function deeper          *
// This function displays a message.      *
//*****************************************

void deeper()
{
    cout << "I am now inside the function deeper.\n";
}

//*****************************************
// Definition of function deep            *
// This function displays a message.      *
//*****************************************

void deep()
{
    cout << "I am now inside the function deep.\n";
    deeper();    // Call function deeper
    cout << "Now I am back in deep.\n";
}

//*****************************************
// Function main                          *
//*****************************************

int main()
{
    cout << "I am starting in function main.\n";
    deep();      // Call function deep
    cout << "Back in function main again.\n";
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