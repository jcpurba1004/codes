// largestNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//****************************************************
// Author: Jeremiah Purba
//
// This program find the largest number of a set of 10
// numbers.
//****************************************************

#include <iostream>

using namespace std;

double larger(double x, double y);

int main()
{
    double num; //variable to hold the current number
    double max; //variable to hold the larger number
    int count;  //loop control variable

    cout << "Enter 10 numbers." << endl;
    cin >> num;
    max = num;

    for (count = 1; count < 10; count++)
    {
        cin >> num;
        max = larger(max, num);
    }

    cout << "The largest number is " << max
         << endl;

    return 0;
} //end min

    double larger(double x, double y)
    {
        if (x >= y)
            return x;
        else
            return y;
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
