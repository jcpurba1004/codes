// chap9-15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program demonstrates a function that returns
// a pointer.
#include <iostream>
#include <cstdlib>  // For rand and srand
#include <ctime>    // For the time function
using namespace std;

// Function prototype
int *getRandomNumbers(int);

int main()
{
    int *numbers = nullptr;   // To point to the numbers

    // Get an array of five random numbers.
    numbers = getRandomNumbers(5);

    // Display the numbers.
    for (int count = 0; count < 5; count++)
        cout << numbers[count] << endl;

    // Free the memory.
    delete [] numbers;
    numbers = nullptr;
    return 0;
}

//***************************************************************
// The getRandomNumbers function returns a pointer              *
// to an array of random integers. The parameter                *
// indicates the number of numbers requested.                   *
//***************************************************************

int *getRandomNumbers(int num)
{
    int *arr = nullptr;   // Array to hold the numbers

    // Return a null pointer if num is zero or negative.
    if (num <= 0)
        return nullptr;

    // Dynamically allocate the array.
    arr = new int[num];

    // Seed the random number generator by passing
    // the return value of time(0) to srand.
    srand( time(0) );

    // Populate the array with random numbers.
    for (int count = 0; count < num; count++)
        arr[count] = rand();

    // Return a pointer to the array.
    return arr;
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