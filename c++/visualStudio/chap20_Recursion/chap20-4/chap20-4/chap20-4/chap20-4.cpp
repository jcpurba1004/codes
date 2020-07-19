// chap20-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program demonstrates a recursive function for counting
// the number of times a character appears in a string.
#include <iostream>
#include <string>
using namespace std;

// Function prototype
int numChars(char, string, int);

int main()
{
    string str = "abcddddef";

    // Display the number of times the letter
    // 'd' appears in the string.
    cout << "The letter d appears "
         << numChars('d', str, 0) << " times.\n";

    return 0;
}

//***********************************************
// Function numChars. This recursive function   *
// counts the number of times the character     *
// search appears in the string str. The search *
// begins at the subscript stored in subscript. *
//***********************************************

int numChars(char search, string str, int subscript)
{
    if (subscript >= str.length())
    {
        // Base case: The end of the string is reached.
        return 0;
    }
    else if (str[subscript] == search)
    {
        // Recursive case: A matching character was found.
        // Return 1 plus the number of times the search
        // character appears in the restof the string.
        return 1 + numChars(search, str, subscript+1);
    }
    else
    {
        // Recursive case: A character that does not match the
        // search character was found. Return the number of times
        // the search character appears in the rest of the string.
        return numChars(search, str, subscript + 1);
    }
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