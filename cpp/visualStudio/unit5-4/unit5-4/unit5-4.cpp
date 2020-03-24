// unit5-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Program: Sentinel-Controlled Loop
//This program computes and outputs the total number of boxes of
//cookies sold, the total revenue and the average number of
//boxes sold by each volunteer.

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const string SENTINEL = "-1";

int main()
{
    string name;
    int numOfVolunteers;
    int numOfBoxesSold;
    int totalNumOfBoxesSold;
    double costOfOneBox;

    cout << fixed << showpoint << setprecision(2);

    cout << "Line 14: Enter each volunteer's name and "
        << "the number of boxes " << endl
        << "         sold by each volunteer, ending "
        << "width -1: " << endl;

    totalNumOfBoxesSold = 0;
    numOfVolunteers = 0;

    cin >> name;

    while (name != SENTINEL)
    {
        cin >> numOfBoxesSold;
        totalNumOfBoxesSold = totalNumOfBoxesSold
                              + numOfBoxesSold;
        numOfVolunteers++;
        cin >> name;
    }

    cout << endl;

    cout << "Line 26: The total number of boxes sold: "
         << totalNumOfBoxesSold << endl;

    cout << "Line 27: Enter the cost of one box: ";
    cin >> costOfOneBox;
    cout << endl;

    cout << "Line 30: The total money made by selling "
         << "cookies: $"
         << totalNumOfBoxesSold * costOfOneBox << endl;

    if (numOfVolunteers != 0)
        cout << "Line 32: The average number of "
        << "boxes sold by each volunteer: "
        << totalNumOfBoxesSold / numOfVolunteers
        << endl;
    else
        cout << "Line 34: No input." << endl;

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
