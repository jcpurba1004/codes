// chap7-26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program demonstrates the range-based for loop with a vector.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Define a vector.
    vector<int> numbers(5);

    // Get values for the vector elements.
    for (int &val : numbers)
    {
        cout << "Enter an integer value: ";
        cin >> val;
    }

    // Display the vector elements.
    cout << "Here are the values you entered:\n";
    for (int val : numbers)
        cout << val << endl;

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
