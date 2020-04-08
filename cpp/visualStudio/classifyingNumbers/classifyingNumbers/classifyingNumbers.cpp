// classifyingNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//********************************************************
// Author: Jeremiah Purba
//
// Program: Counts zeros, odds and evens
// This program counts the number of odd and even numbers.
// The program also counts the number of zeros.
//********************************************************

#include <iostream>
#include <iomanip>

using namespace std;

const int N = 20;

int main ()
{
        //Declare variables
    int counter;    //loop control variable
    int number;     //variable to store the new number

    int zeros = 0;
    int odds = 0;
    int evens = 0;

    cout << "Please enter " << N << " integers, "
         << "positive, negative or zeros."
         << endl;

    cout << "The numbers you entered are:" << endl;

    for (counter = 1; counter <= N; counter++)
    {
        cin >> number;
        cout << number << " ";

             //Step 3c
        switch (number % 2)
        {
        case 0:
            evens++;
            if (number == 0)
                zeros++;
            break;
        case 1:
        case -1:
            odds++;
        } //end switch
    } //end for loop

    cout << endl;
                    //Step 4
    cout << "There are " << evens << " evens, "
         << "which includes " << zeros << " zeros."
         << endl;
    cout << "The number of odd numbers is: " << odds
         << endl;

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
