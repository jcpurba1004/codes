// chap7-29.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program demonstrates the vector pop_back member function.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> values;

    // Store values in the vector.
    values.push_back(1);
    values.push_back(2);
    values.push_back(3);
    cout << "The size of values is now " << values.size() << endl;

    // Now remove another value from the vector.
    cout << "Popping a value from the vector ... \n";
    values.pop_back();
    cout << "The size of values is now " << values.size() << endl;

    // Remove the last value from the vector.
    cout << "Popping a value from the vector ... \n";
    values.pop_back();
    cout << "The size of values is now " << values.size() << endl;
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
