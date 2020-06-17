// unit8-8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program illustrates how to use a sequential search in a
// program.

#include <iostream>

using namespace std;

const int ARRAY_SIZE = 10;

int seqSearch(const int list[], int listLength, int searchItem);

int main()
{
    int intList[ARRAY_SIZE];
    int number;

    cout << "Line 9: Enter " << ARRAY_SIZE
         << " integers." << endl;

    for (int index = 0; index < ARRAY_SIZE; index++)
        cin >> intList[index];

    cout << endl;

    cout << "LIne 13: Enter the number to be "
         << "searched: ";
    cin >> number;
    cout << endl;

    int pos = seqSearch(intList, ARRAY_SIZE, number);

    if (pos!= -1)
        cout << "Line 18: " << number
             << " is found at index " << pos
             << endl;
    else
        cout << "Line 20: " << number
             << " is not in the list." << endl;

    return 0;
}

//Place the definition of the function seqSearch
//given previously here.

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

int seqSearch(const int list[], int listLength, int searchItem)
{
    return 0;
}
