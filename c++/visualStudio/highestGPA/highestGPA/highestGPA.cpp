// highestGPA.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//**************************************************************
// Author: Jeremiah Purba
//
// This program uses the class myStack to determine the
// highest GPA from a list of students with their GPA.
// The program also outputs the names of the students
// who received the highest GPA.
//**************************************************************

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

#include "myStack.h"

using namespace std;

int main()
{
    double GPA;
    double highestGPA;
    string name;

    stackType<string> stack(100);

    ifstream infile;

    infile.open("HighestGPAData.txt");

    if (!infile)
    {
        cout << "The input file does not "
             << "exist. Program terminates!"
             << endl;
        return 1;
    }

    cout << fixed << showpoint;
    cout << setprecision(2);

    infile >> GPA >> name;

    highestGPA = GPA; 

    while (infile)
    {
        if (GPA > highestGPA)
        {
            stack.initializeStack();

            if (!stack.isFullStack())
                stack.push(name);

            highestGPA = GPA;
        }
        else if (GPA == highestGPA)
            if (!stack.isFullStack())
                stack.push(name);
            else
            {
                cout << "Stack overflows. "
                     << "Program terminates!"
                     << endl;
                return 1;  //exit program
            }
        infile >> GPA >> name;
    }

    cout << "Highest GPA = " << highestGPA
         << endl;
    cout << "The students holding the "
         << "highest GPA are:" << endl;

    while (!stack.isFullStack())
    {
        cout << stack.top() << endl;
        stack.pop();
    }
        cout << endl;

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
