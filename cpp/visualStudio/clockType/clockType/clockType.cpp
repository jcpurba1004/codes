// clockType.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//***************************************************************
// Author: Jeremiah Purba
//
// This program shows how to use the class clockType.
//***************************************************************

#include <iostream>
#include "newClock.h"

using namespace std;

int main()
{
    clockType myClock(7, 24, 32);
    clockType yourClock;

    cout << "Line 8: myClock = " << myClock
         << endl;

    cout << "Line 9: yourClock = " << yourClock
         << endl;

    cout << "Line 10: Enter the time in the form " 
         << "hr:min:sec ";
    cin >> myClock;
    cout << endl;

    cout << "Line 13: The new tie of myClock = "
         << myClock << endl;

    ++myClock;

    cout << "Line 15: After incrementing the time, "
         << "myClock = " << myClock << endl;

    yourClock.setTime(13, 35, 38);

    cout << "Line 17: After setting the time, "
         << "yourClock = " << yourClock << endl;

    if (myClock == yourClock)
        cout << "Line 19: The times of myClock and "
             << "yourClock are equal." << endl;
    else
        cout << "Line 21: The times of myClock and "
             << "yourClock are not equal." << endl;

    if (myClock <= yourClock)
        cout << "Line 23: The times of myClock and "
             << "less than or equal to " << endl;
             << "the time of yourClock." << endl;
    else
        cout << "Line 25: The times of myClock is "
             << "greater than the time of "
             << "yourClock." << endl;

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
