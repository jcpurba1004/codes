// chap20-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program demonstrates a recursive function to calculate
// the greatest common divisor (gcd) of two numbers.
#include <iostream>
using namespace std;

// Function prototype 
int gcd(int, int);

int main()
{
    int num1, num2;

    // Get two numbers.
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    // Display the GCD of the numbers.
    cout << "The greatest common divisor of " << num1;
    cout << " and " << num2 << " is ";
    cout << gcd(num1, num2) << endl;
    return 0;
}

//********************************************************
// Definition of gcd. This function uses recursion to    *
// calculate the greatest common divisor of two integers *
// passed into the parameters x and y.                   *
//********************************************************

int gcd(int x, int y)
{
    if (x % y == 0)
        return y;                // Base case
    else
        return gcd(y, x % y);    // Recursive case
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