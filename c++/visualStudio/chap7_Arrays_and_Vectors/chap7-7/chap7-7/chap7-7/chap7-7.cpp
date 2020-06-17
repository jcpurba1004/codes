// chap7-7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program reads data from a file into an array.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 10; // Array size
    int numbers[ARRAY_SIZE];   // Array with 10 elements
    int count = 0;             // Loop counter variable
    ifstream inputFile;        // Input file stream object

    // Open the file.
    inputFile.open("TenNumbers.txt");

    // Read the numbers from the file into the array.
    while (count < ARRAY_SIZE && inputFile >> numbers[count])
        count++;

    // Close the file.
    inputFile.close();

    // Display the numbers read:
    cout << "The numbers are: ";
    for (count = 0; count < ARRAY_SIZE; count++)
        cout << numbers[count] << " ";
    cout << endl;
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