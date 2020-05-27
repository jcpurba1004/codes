// unit10-11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//The user program that uses the class integerManipulation

#include <iostream>
#include "integerManipulation.h"
using namespace std;

int main()
{
    integerManipulation number;

    long long num;

    cout << "Enter an integer: ";
    cin >> num;
    cout << endl;

    number.setNum(num);

    number.classifyDigits();

    cout << number.getNum() << "------" << endl
         << "The number of even digits: "
         << number.getEvensCount() << endl;
         << "The number of zeros: "
         << number.getZerosCount() << endl
         << "The number of odd digits: "
         << number.getOddsCount() << endl;

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
