// unit14-17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Handle exceptions by fixing the errors. The program
// continues to prompt the user until a valid input is entered.

#include <iostream>

using namespace std;

int main()
{
    int number;
    bool done = false;

    char str[] =
          "The input streamis in the fail state.";

    do
    {
        try
        {
            cout << "Line 12: Enter an integer: ";
            cin >> number;
            cout << endl;
            if (!cin)
                throw str;

            done = true;
            cout << "Line 18: Number = " << number
                 << endl;
        }
        catch (const char messageStr[])
        {
            cout << "Line 22: " << messageStr
                 << endl;
            cout << "Line 23: Restoring the "
                 << "input stream." << endl;
            cin.clear();
            cin.ignore(100, '\n');
        }
    }
    while (!done);

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