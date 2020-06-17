// chap7-28.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program demonstrates the vector size
// member function.
#include <iostream>
#include <vector>
using namespace std;

// Function prototype
void showValues(vector<int>);

int main()
{
    vector<int> values;

    // Put a series of numbers in the vector.
    for (int count = 0; count < 7; count++)
        values.push_back(count * 2);

    // Display the numbers.
    showValues(values);
    return 0;
}

//***************************************************************
// Definition of function showValues.                           *
// This function accepts an int vector as its                   *
// argument. The value of each of the vector's                  *
// elements is displayed.
//***************************************************************

void showValues(vector<int> vect)
{
    for (int count = 0; count < vect.size(); count++)
       cout << vect[count] << endl;
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