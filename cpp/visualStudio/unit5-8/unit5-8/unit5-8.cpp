// unit5-8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program reads data from a file consisting of students'
// names and their test scores. The program outputs each student's
// name followed by the test score followed by the grade. The
// program also outputs the average test score for all the students.

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
       //Declare variables to manipulate data
    string firstName;
    string lastName;
    double testScore;
    char grade = ' ';
    double sum = 0;
    int count = 0;

       //Declare stream variables
    ifstream inFile;
    ofstream outFile;

       //Open input file
    inFile.open("Ch5_stData.txt");

    if (!inFile)
    {
        cout << "Cannot open input file. "
             << "Program terminates!" << endl;
        return 1;
    }
        //Open output file
    outFile.open("Ch5_stData.out");

    outFile << fixed << showpoint << setprecision(2);

    inFile >> firstName >> lastName;   //read the name
    inFile >> testScore;       //read the test score

    while (inFile)
    {
        sum = sum + testScore; //update sum
        count++;               //increment count

           //determine the grade
        switch (static_cast<int> (testScore) / 10)
        {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            grade = 'F';
            break;
        case 6:
            grade = 'D';
            break;
        case 7:
            grade = 'C';
            break;
        case 8:
            grade = 'B';
            break;
        case 9:
        case 10:
            grade = 'A';
            break;
        default:
            cout << "Invalid score." << endl;
        }//end switch

        outFile << left << setw(12) << firstName
                << setw(12) << lastName
                << right << setw(4) << testScore
                << setw(2) << grade << endl;

        inFile >> firstName >> lastName;
        inFile >> testScore;
    }//end while

    outFile << endl;

    if (count != 0)
        outFile << "Class Average: " << sum / count
                << endl;
    else
        outFile << "No data." << endl;

    inFile.close();
    outFile.close();

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
