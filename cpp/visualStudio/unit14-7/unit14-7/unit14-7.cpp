// unit14-7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Handle division by zero, division by a negative integer,
// and input failure exceptions.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int dividend, divisor = 1, quotient;

    string inpStr
       = "The input stream is in the fail state.";

    try
    {
        cout << "Line 10: Enter the dividend: ";
        cin >> dividend;
        cout << endl;

        cout << "Line 13: Enter the divisor: ";
        cin >> divisor;
        cout << endl;

        if (divisor == 0)
            throw divisor;
        else if (divisor < 0)
            throw string("Negative divisor.");
        else if (!cin)
            throw inpStr;

        quotient = dividend / divisor;

        cout << "Line 23: Quotient = " << quotient
             << endl;
    }
    catch (int x)
    {
        cout << "Line 27: Division by " << x
             << endl;
    }
    catch (string s)
    {
        cout << "Line 31: " << s << endl;
    }

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
