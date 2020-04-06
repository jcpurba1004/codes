// unit8-11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Two-dimensional arrays as parameters to functions.

#include <iostream>
#include <iomanip>

using namespace std;
const int NUMBER_OF_ROWS = 6;
const int NUMBER_OF_COLUMNS = 5;

int main();

void printMatrix(int matrix[][NUMBER_OF_COLUMNS], int  NUMBER_OF_ROWS);
void sumRows(int matrix[][NUMBER_OF_COLUMNS], int  NUMBER_OF_ROWS);
void largestInRows(int matrix[][NUMBER_OF_COLUMNS], int  NUMBER_OF_ROWS);

int main()
{
    int board[NUMBER_OF_ROWS] [NUMBER_OF_COLUMNS]
                        = {{17, 8, 24, 10, 28},
                           {9, 20, 16, 55, 90},
                           {25, 45, 35, 8, 78},
                           {5, 0, 96, 45, 38},
                           {76, 30, 8, 14, 28},
                           {9, 60, 55, 62, 10}},
    printMatrix(board, NUMBER_OF_ROWS);
    cout << endl;
    sumRows(board, NUMBER_OF_ROWS);
    cout << endl;
    largestInRows(board, NUMBER_OF_ROWS);

    return 0;
}
//Place the definitions of the functions printMatrix,
//sumRows, and largestInRows as described previously here.s

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

void printMatrix(int matrix[][NUMBER_OF_COLUMNS], int NUMBER_OF_ROWS)
{
}

void sumRows(int matrix[][NUMBER_OF_COLUMNS], int NUMBER_OF_ROWS)
{
}

void largestInRows(int matrix[][NUMBER_OF_COLUMNS], int NUMBER_OF_ROWS)
{
}
