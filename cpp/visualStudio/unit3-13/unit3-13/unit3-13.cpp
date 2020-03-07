// unit3-13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Example: This example illustrates how the functions 

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int miles = 245;
    int speed = 55;
    double hours = 35.45;
    double error = 3.7564;

    cout << fixed << showpoint;
    cout << "123456789012345678901234567890" << endl;

    cout << setw(5) << miles << endl;
    
    cout << setprecision(2);
    cout << setw(5) << miles << setw(5) << speed
         << setw(6) << hours
         << setw(7) << error << endl << endl;

    cout << setw(5) << speed << setw(5) << miles
         << setw(4) << hours
         << setw(7) << error << endl << endl;

    cout << setw(2) << miles << setw(6) << hours
         << setw(7) << error << endl << endl;

    cout << setw(2) << miles
         << setw(7) << "error"
         << error << endl;

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
