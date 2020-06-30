// chap13-16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program simulates the rolling of dice.
#include <iostream>
#include "Die.h"
using namespace std;

int main()
{
    const int DIE1_SIDES = 6;    // Number of sides for die #1
    const int DIE2_SIDES = 12;   // Number of sides for die #2
    const int DIE3_SIDES = 5;    // Number of times to roll

    // Create two instances of the Die class.
    Die die1(DIE1_SIDES);
    Die die2(DIE2_SIDES);

    // Display the initial state of the dice.
    cout << "This simulates the rolling of a "
         << die1.getSides() << " sided die and a "
         << die2.getSides() << " sided die.\n";

    cout << "Initial value of the dice:\n";
    cout << die1.getValue() << " "
         << die2.getValue() << endl;

    // Roll the dice five times.
    cout << "Rolling the dice " << MAX_ROLLS
         << " times.\n";
    for (int count = 0; count < MAX_ROLLS; count++)
    {
         // Roll the dice.
         die1.roll();
         die2.roll();

         // Display the values of the dice.
         cout << die1.getValue() << " "
              << die2.getValue() << endl;
    }
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