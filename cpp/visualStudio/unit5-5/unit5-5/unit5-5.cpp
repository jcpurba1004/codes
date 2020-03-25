// unit5-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//**********************************************************
// Program: Telephone Digits
// This is an example of a sentinel-controlled loop. This
// program converts uppercase letters to their corresponding
// telephone digits.
//**********************************************************

#include <iostream>

using namespace std;

int main()
{
    char letter;
    int digit, num;

    cout << "Program to convert uppercase letters to "
         << "their corresponding telephone digits."
         << endl;

    cout << "To stop the program enter #." << endl;

    cout << "Enter an uppercase letter: ";
    cin >> letter;
    cout << endl;

    while (letter != '#')
    {
        cout << "Letter: " << letter;
        cout << ", Corresponding telephone digit: ";

        num = static_cast<int>(letter)
            - static_cast<int>('A');

        if (0 <= num && num < 26)
        {
            digit = (num / 3) + 2;

            if (((num / 3 == 6) || (num / 3 == 7))
                && (num % 3 == 0))
                digit = digit - 1;

            if (digit > 9)
                digit = 9;

            cout << digit << endl;
        }
        else
            cout << "Invalid input." << endl;

        cout << "\nEnter another uppercase "
            << "letter to find its corresponding "
            << "telephone digit." << endl;
        cout << "To stop the program enter #."
            << endl;

        cout << "Enter a letter: ";
        cin >> letter;
        cout << endl;
    }//end while

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
