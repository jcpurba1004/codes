// switch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Grade program with bugs.

#include <iostream>
#include "switch.h"

using namespace std;

int main()
{
    int testScore;

    cout << "Enter the test score: ";
    cin >> testScore;
    cout << endl;
    
    cout << testScore / 10 << endl;

    switch (testScore / 10) 
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        cout << "The grade is F." << endl;
        break;
    case 6:
        cout << "The grade is D." << endl;
        break;
    case 7:
        cout << "The grade is C." << endl;
        break;
    case 8:
        cout << "The grade is B." << endl;
        break;
    case 9:
    case 10:
        cout << "The grade is A." << endl;
        break;
    default:
        cout << "Invalid test score." << endl;
        break;
    }

    return 0;
}