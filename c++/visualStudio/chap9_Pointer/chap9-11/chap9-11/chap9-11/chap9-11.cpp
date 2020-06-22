// chap9-11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program uses two functions that accept addresses of 
// variables as arguments.
#include <iostream>
using namespace std;

// Function prototypes
void getNumber(int *);
void doubleValue(int *);

int main()
{
    int number;

    // Call getNumber and pass the address of number.
    getNumber(&number);

    // Call doubleValue and pass the address of number.
    doubleValue(&number);

    // Display the value in number.
    cout << "That value doubled is " << number << endl;
    return 0;
}

//**************************************************************
// Definition of getNumber. The parameter, input, is a porter. *
// This function asks the user for a number. The value entered *
// is stored in the variable pointed to by input.              *
//**************************************************************

void getNumber(int* input)
{
    cout << "Enter an integer number: ";
    cin >> *input;
}

//***************************************************************
// Definition of doubleValue. The parameter, val, is a pointer. *
// This function multiplies the variable pointed to by val by   *
// two.                                                         *
//***************************************************************

void doubleValue(int* val)
{
    *val *= 2;
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