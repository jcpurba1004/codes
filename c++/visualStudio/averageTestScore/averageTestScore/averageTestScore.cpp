// averageTestScore.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Program to find the average test score and output the
//average test score and all the test scores tha are
//less than the average test score.

#include <iostream>
#include <iomanip>
#include "averageTestScore.h"
using namespace std;

int main()
{
    int test0, test1, test2, test3, test4;
    double average;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter five test scores: ";
    cin >> test0 >> test1 >> test2 >> test3 >> test4;
    cout << endl;

    average = (test0 + test1 + test2 + test3 + test4) / 5.0;

    cout << "The average test score = " << average << endl;

    if (test0 < average)
        cout << test0 << " is less than the average "
             << "test score." << endl;

    if (test1 < average)
        cout << test1 << " is less than the average "
             << "test score." << endl;

    if (test2 < average)
        cout << test2 << " is less than the average "
             << "test score." << endl;

    if (test3 < average)
        cout << test3 << " is less than the average "
             << "test score." << endl;

    if (test4 < average)
        cout << test4 << " is less than the average "
             << "test score." << endl;

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
