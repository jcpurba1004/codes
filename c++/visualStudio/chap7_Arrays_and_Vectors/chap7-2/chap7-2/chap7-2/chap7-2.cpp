// chap7-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program asks for the number of hours worked
// by six employees. It stores the values in an array.
#include <iostream>
using namespace std;

int main()
{
    const int NUM_EMPLOYEES = 6; // Number of employees
    int hours[NUM_EMPLOYEES];    // Each employee's hours
    int count;                   // Loop counter

    // Input the hours worked.
    for (count = 0; count < NUM_EMPLOYEES; count++)
    {
        cout << "Enter the hours workedby employee "
             << (count + 1) << ": ";
        cin >> hours[count];
    }

    // Display the contents of the array.
    cout << "The hours you entered are:";
    for (count = 0; count < NUM_EMPLOYEES; count++)
       cout << " " << hours[count];
    cout << endl;
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