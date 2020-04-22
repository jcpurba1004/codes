// unit5-17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Program to determine the sum of the first n positive numbers.

#include <iostream>

using namespace std;

int main()
{
    int counter;  //loop control variable
    int sum;      //variable to store the sum of numbers
    int N;        //variable to store the number of
                  //first positive integers to be added

    cout << "Line 8: Enter the number of positive "
         << "integers to be added: ";
    cin >> N;
    sum = 0;
    cout << endl;

    for (counter = 1; counter <= N; counter++)
        sum = sum + counter;

    cout << "Line 14: The sum of the first " << N
         << " positive integers is " << sum
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
