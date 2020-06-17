// unit6-13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//This program reads a course score and prints the
//associated course grade.

#include <iostream>

using namespace std;

void getScore(int& score);
void printGrade(int score);

int main()
{
    int courseScore;

    cout << "Line 8: Based on the course score, \n"
         << "        this program computes the "
         << "course grade." << endl;

    getScore(courseScore);

    printGrade(courseScore);

    return 0;
}
void getScore(int& score)
{
    cout << "Line 15: Enter course score: ";
    cin >> score;
    cout << endl << "Line 17: The course score is "
                 << score << endl;
}

void printGrade(int cScore)
{
    cout << "Line 21: The course grade is: ";

    if (cScore >= 90)
        cout << "A." << endl;
    else if (cScore >= 80)
        cout << "B." << endl;
    else if (cScore >= 70)
        cout << "C." << endl;
    else if (cScore >= 60)
        cout << "D." << endl;
    else
        cout << "F." << endl;
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
