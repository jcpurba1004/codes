// unit14-9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Handling bad_alloc exception thrown by the operation new.

#include <iostream>

using namespace std;

int main()
{
    int *list[100];

    try
    {
        for (int i = 0; i < 100; i++)
        {
            list[i] = new int[50000000];
            cout << "Line 11: Created list[" << i
                 << "] of 50000000 components."
                 << endl;
        }
    }
    catch (bad_alloc be)
    {
        cout << "Line 16: In the bad_alloc catch "
             << "block: " << be.what() << "."
             << endl;
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
