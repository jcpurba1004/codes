// centCoin.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//**************************************************************
// Author: Jeremiah Purba
//
// Program Make Change: Given any amount of change expressed
// in cents, this program computes the number of half-dollars,
// quarters, dimes, nickels, and pennies to be returned,
// returning as many half-dollars as possible, then quarters
// dimes, nickels, and pennies in that order.
//**************************************************************

    //header file   
#include <iostream>

using namespace std;
    //named constants
const int HALF_DOLLAR = 50;
const int QUARTER  = 25;
const int DIME = 10;
const int NICKEL = 5;

int main()
{
        //declare variable
    int change;

        //Statements: Step 1 - Step 12
    cout << "Enter change in cents: ";
    cin >> change;
    cout << endl;

    cout << "The change you entered is " << change
         << endl;

    cout << "The number of half-dollars to be returned "
         << "is " << change / HALF_DOLLAR
         << endl;

    change = change % HALF_DOLLAR;
    
    cout << "The number of quarters to be returned is "
         << change / QUARTER << endl;

    change = change % QUARTER;

    cout << "The number of dimes to be returned is "
        << change / DIME << endl;

    change = change % DIME;

    cout << "The number of nickels to be returned is "
        << change / NICKEL << endl;

    change = change % NICKEL;

    cout << "The number of pennies to be returned is "
         << change << endl;

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
