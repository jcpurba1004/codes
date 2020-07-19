// chap20-6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program demonstrates a recursive function
// that calculates Fibonacci numbers.
#include <iostream>
using namespace std;

// Function prototype
int fib(int);

int main()
{
    cout << "The first 10 Fibonnaci numbers are:\n";
    for (int x = 0; x < 10; x++)
        cout << fib(x) << " ";
    cout << endl;
    return 0;
}

//****************************************
// Function fib. Accepts an int argument *
// in n. This function returns the nth   *
// Fibonacci number.                     *
//****************************************

int fib(int n)
{
    if (n <= 0)                            // Base case
        return 0;
    else if (n == 1)                       // Base case
        return 1;
    else
        return fib(n - 1) + fib(n - 2);    // Recursive case
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