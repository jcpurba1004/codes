// unit3-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a;
    double z;
    char ch;
    cout << fixed << showpoint << setprecision(2);  // set output format to 2 decimal places

    cout << "Enter integer, character and double: ";
    cin >> a >> ch >> z;
    cout << "Integer, character and double entered: " << a << " " << ch << " " << z;

    cout << endl;

    cout << "Enter  integer, character and double: ";
    cin >> a >> ch >> z;
    cout << "Input entered: " << a << " " << ch << " " << z;

    cout << endl;

    cout << "Enter integer, character and double: ";
    cin >> a >> ch >> z;
    cout << "Integer, character and double entered: " << a << " " << ch << " " << z;

    cout << endl;

    cout << "Enter  integer, character and double: ";
    cin >> a >> ch >> z;
    cout << "Input entered: " << a << " " << ch << " " << z;

    cout << endl;
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
