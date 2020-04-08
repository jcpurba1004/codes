// unit5-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Program: Counter-Controlled Loop
//This program computes and outputs the total number of boxes of
//cookies sold, the total revenue and the average number of
//boxes sold by each volunteer.
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string name;
    int numOfVolunteers;
    int numOfBoxesSold;
    int totalNumOfBoxesSold;
    int counter;
    double costOfOneBox;

    cout << fixed << showpoint << setprecision(2);

    cout << "Line 14: Enter the number of "
         << "volunteers: ";
    cin >> numOfVolunteers;
    cout << endl;

    totalNumOfBoxesSold = 0;
    counter = 0;

    while (counter < numOfVolunteers)
    {
        cout << "Line 21: Enter the volunteer's name"
             << " and the number of boxes sold: ";
        cin >> name >> numOfBoxesSold;
        cout << endl;
        totalNumOfBoxesSold = totalNumOfBoxesSold
                              + numOfBoxesSold;
        counter++;
    }

    cout << "Line 27: The total number of boxes sold: "
         << totalNumOfBoxesSold << endl;

    cout << "Line 28: Enter the cost of one box: ";
    cin >> costOfOneBox;
    cout << endl;

    cout << "Line 31: The total money made by selling "
         << "cookies: $"
         << totalNumOfBoxesSold * costOfOneBox << endl;

    if (counter != 0)
        cout << "Line 33: The average number of "
             << "boxes sold by each volunteer: "
             << totalNumOfBoxesSold / counter << endl;
        else
            cout << "Line 35: No input." << endl;

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
