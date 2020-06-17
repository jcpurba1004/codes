// unit4-2g.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Correct GPA program.

#include <iostream>

using namespace std;

int main()
{
    double gpa;
    cout << "Enter the GPA: ";
    cin >> gpa;
    cout << endl;

    if (gpa >= 2.0)
    {
        if (gpa >= 3.9)
            cout << "Dean\'s Honor List." << endl;
    }
    else
        cout << "The GPA is below the graduation "
             << "requirement. \nSee your "
             << "academic advisor." << endl;

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
