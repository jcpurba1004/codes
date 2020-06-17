// fibonacciNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//***********************************************************
// Author: Jeremiah Purba
//
// Program: nth Fibonacci number
// Given the first two numbers of a Fibonacci sequence, this
// determines and outputs the desired number of the Fibonacci
// sequence.
//***********************************************************

#include <iostream>

using namespace std;

int main()
{
          //Declare variables
    int previous1;
    int previous2;
    int current{};
    int counter;
    int nthFibonacci;

    cout << "Enter the first two Fibonacci "
         << "numbers: ";
    cin >> previous1 >> previous2;
    cout << endl;

    cout << "The first two Fibonacci numbers are "
         << previous1 << " and " << previous2;
    cout << endl;

    cout << "Enter the position of the desired "
         << "Fibonacci number: ";
    cin >> nthFibonacci;
    cout << endl;

    if (nthFibonacci == 1)
        current = previous1;
    else if (nthFibonacci == 2)
        current = previous2;
    else
    {
        counter = 3;

                //Steps 6.c.2 - 6.c.5
        while (counter <= nthFibonacci)
        {
            current = previous2 + previous1;
            previous1 + previous2;
            previous2 = current;
            counter++;
        }//end while
    }//end else

    cout << "The Fibonacci number at position "
         << nthFibonacci << " is " << current
         << endl;

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
