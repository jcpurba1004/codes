// chap7-22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program demonstrates accepting a 2D array argument.
#include <iostream>
#include <iomanip>
#include "chap7-22.h"
using namespace std;

// Global constants 
const int COLS = 4;      // Number of columns in each array
const int TBL1_ROWS = 3; // Number of rows in table1
const int TBL1_ROWS = 4; // Number of rows in table2

void showArray(const int [][COLS], int); // Function prototype

int main()
{
    int table1[TBL1_ROWS][COLS] = {{1, 2, 3, 4},
                                   {5, 6, 7, 8},
                                   {9, 10, 11, 12}};
    int table2[TBL2_ROWS][COLS] = {{10, 20, 30, 40},
                                   {50, 60, 70, 80},
                                   {90, 100, 110, 120},
                                   {130, 140, 150, 160}};

    cout << "The contents of table1 are:\n";
    showArray(table1, TBL1_ROWS);
    cout << "The contents of table2 are:\n";
    showArray(table2, TBL2_ROWS);
    return 0;
}

//*****************************************************************
// Function Definition for showArray                              *
// The first argumentis a two-dimensional int array with COLS     *
// columns. The second argument, rows, specifies the number of    *
// rows in the array. The function displays the array's contents. *
//*****************************************************************

void showArray(const int numbers[][COLS], int rows)
{
    for (int x = 0; x < rows; x++)
    {
        for (int y = 0; y < COLS; y++)
        {
            cout << setw(4) << numbers[x][y] << " ";
        }
        cout << endl;
    }
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