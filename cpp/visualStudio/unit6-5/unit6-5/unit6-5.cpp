// unit6-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Program: Fibonacci number

#include <iostream>

using namespace std;

int nthFibonacciNum(int first, int second, int position);

int main()
{
    int firstFibonacciNum;
    int secondFibonacciNum;
    int nthFibonacci;

    cout << "Enter the first two Fibonacci "
        << "numbers: ";
    cin >> firstFibonacciNum >> secondFibonacciNum;
    cout << endl;
    cout << "The first two Fibonacci numbers are "
        << firstFibonacciNum << " and "
        << secondFibonacciNum
        << endl;

    cout << "Enter the position of the desired "
        << "Fibonacci number: ";
    cin >> nthFibonacci;
    cout << endl;

    cout << "The Fibonacci number at position "
        << nthFibonacci << " is "
        << nthFibonacciNum(firstFibonacciNum, secondFibonacciNum, nthFibonacci)
        << endl;

    return 0;
}

int nthFibonacciNum(int first, int second, int nthFibNum)
{
    int current;
    int counter;

    if (nthFibonacci == 1)
            current = first;
    else if (nthFibNum == 2)
            current = second;
    else
    {
        counter = 3;

        while (counter <= nthFibNum)
        {
            current = second + first;
            first = second;
            second = current;
            counter++;
        }//end while
    }//end else

    return current;
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
