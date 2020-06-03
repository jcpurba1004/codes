// unit13-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "clockType.h"

using namespace std;

int main()
{
    clockType myClock(8, 23, 50);
    clockType yourClock(8, 23, 50);
    clockType tempClock(9, 16, 25);

    cout << "Line 9: myClock: ";
    myClock.printTime();
    cout << endl;

    cout << "Line 12: yourClock: ";
    yourClock.printTime();
    cout << endl;

    cout << "Line 15: tempClock: ";
    tempClock.printTime();
    cout << endl;

        //Compare myClock and yourClock
    if (myClock == yourClock)
        cout << "Line 19: The time of myClock and "
             << "yourClock are equal." << endl;
    else
        cout << "Line 21: The time of myClock and "
             << "yourClock are not equal." << endl;

        //Compare myClock and tempClock
    if (myClock == tempClock)
        cout << "Line 23: The time of myClock and "
             << "tempClock are equal." << endl;
    else
        cout << "Line 25: The time of myClock and "
             << "tempClock are not equal." << endl;

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
