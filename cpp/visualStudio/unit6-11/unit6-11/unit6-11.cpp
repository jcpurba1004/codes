// unit6-11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Program: Print a triangle of stars

#include <iostream>

using namespace std;

int main()
{
    int noOfLines;  //var to store the number of lines
    int counter;    //for loop contrl variable
    int noOfBlanks; //var to store the number of blanks

    cout << "Enter the number of star lines (1 to 20) "
         << "to be printed: ";
    cin >> noOfLines;

    while (noOfLines < 0 || noOfLines > 20)
    {
        cout << "Enter the number of star lines "
             << "(1 to 20) to be printed: ";
        cin  >> noOfLines;
    }

    cout << endl << endl;
    noOfBlanks = 30;

    for (counter = 1; counter <= noOfLines; counter++)
    {
        printStars(noOfBlanks, counter);
        noOfBlanks--;
    }

    return 0;
}

void printStars(int blanks, int starsInLine)
{
    int count;

    for (count = 1; count <= blanks; count++)
        cout << ' ';
    for (count = 1; count <= starsInLine; count++)
        cout << ' ';
    cout << endl;
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
