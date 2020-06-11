// unit6-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program has three functins: main, First and Second
#include <iostream>
using namespace std;

// Function Prototypes
void first();
void second();

int main()
{
    cout << "I am starting in function main.\n";
    first();    // Call function first
    second();   // Call function second
    cout << "Back in function main again.\n";
    return 0;
}

//*****************************************
// Definition of function first           *
// This function displays a message.      *
//*****************************************

void first()
{
    cout << "I am now inside the function first.\n";
}

//*****************************************
// Definition of function second          *
// This function displays a message.      *
//*****************************************

void second()
{
    cout << "I am now inside the function second.\n";
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

void first()
{
}

void second()
{
}
