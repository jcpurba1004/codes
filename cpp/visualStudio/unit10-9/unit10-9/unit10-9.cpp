// unit10-9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//The user program that uses the class die

#include <iostream>
#include "die.h"

using namespace std;

int main()
{
    die die1;
    die die2;

    cout << "Line 8: die1: " << die1.getNum()
         << endl;
    cout << "Line 9: die2: " << die2.getNum()
         << endl;

    die1.roll();
    cout << "Line 11: After rolling die1: "
         << die1.getNum() << endl;

    die2.roll();
    cout << "Line 13: After rolling die2: "
         << die2.getNum() << endl;
    cout << "Line 14: The sum of the numbers rolled"
         << " by the dice is: "
         << die1.getNum() + die2.getNum() << endl;

    die1.roll();
    die2.roll();

    cout << "Line 17: After again rolling, the sum of "
         << "the numbers rolled is: "
         << die1.getNum() + die2.getNum() << endl;

    return 0;
}//end main

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
