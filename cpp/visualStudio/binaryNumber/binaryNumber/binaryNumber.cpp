// binaryNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//**************************************************************
// Author: Jeremiah Purba
//
// Program: Binary to decimal
// This program uses recursion to find the decimal
// representation of a binary number.
//**************************************************************

#include <iostream>
#include <cmath>

using namespace std;

void binToDec(long binaryNumber, int& decimal, int& weight);

int main()
{
    int decimalNumber;
    int bitWeight;
    int binaryNum;

    decimalNumber = 0;
    bitWeight = 0;

    cout << "Enter number in binary: ";
    cin >> binaryNum;
    cout << endl;

    binToDec(binaryNum, decimalNumber, bitWeight);
    cout << "Binary " << binaryNum << " = " << decimalNumber
         << " decimal" << endl;

    return 0;
}

void binToDec(long binaryNumber, int& decimal, int& weight)
{
    int bit;

    if (binaryNumber > 0)
    {
        bit = binaryNumber % 10;
        decimal = decimal
                  + bit * static_cast<int>(pow(2.0, weight));
        binaryNumber = binaryNumber / 10;
        weight++;
        binToDec(binaryNumber, decimal, weight);
    }
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