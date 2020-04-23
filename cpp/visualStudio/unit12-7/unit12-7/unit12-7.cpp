// unit12-7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

void fill(int **p, int rowSize, int columnSize);
void print(int **p, int rowSize, int columnSize);

int main()
{
    int **board;

    int rows;
    int columns;

    cout << "Line 11: Enter the number of rows "
         << "and columns: ";
    cin >> rows >> columns;
    cout << endl;

        //Create the rows of board
    board = new int* [rows];

        //Create the columns of board
    for (int row = 0; row < rows; row++)
        board[row] = new int[columns];

        //Insert elements into board
    fill(board, rows, columns);

    cout << "Line 18: Board:" << endl;

        //Output the elements of board
    print(board, rows, columns);

    return 0;
}

void fill(int** p, int rowSize, int columnSize)
{
    for (int row = 0; row < rowSize; row++)
    {
        cout << "Enter " << columnSize << " number(s)"
             << " for row number " << row << ": ";
        for (int col = 0; col < columnSize; col++)
            cin >> p[row][col];
        cout << endl;
    }
}

void print(int** p, int rowSize, int columnSize)
{
}

void fill(int** p, int rowSize, int columnSize)
{
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < columnSize; col++)
            cout << setw(5) << p[row][col];
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