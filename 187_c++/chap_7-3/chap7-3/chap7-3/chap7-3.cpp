// chap7-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program displays the number of days in each month.
#include <iostream>
using namespace std;

int main()
{
    const int MONTHS = 12;
    int days[MONTHS] = { 31, 28, 31, 30,
                         31, 30, 31, 31,
                         30, 31, 30, 31 };

    for (int count = 0; count < MONTHS; count++)
    {
        cout << "Month " << (count + 1) << " has ";
        cout << days[count] << " days.\n";
    }
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