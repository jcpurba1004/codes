// unit3-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b;
    double z;
    char ch, ch1, ch2; 
    cout << fixed << showpoint << setprecision(2);  // set output format to 2 decimal places

    cout << "Enter character: ";
    cin >> ch;
    cout << "Character entered: " << ch;

    cout << endl;

    cout << "Enter character: ";
    cin >> ch;
    cout << "Character entered: " << ch;

    cout << endl;

    cout << "Enter integer: ";
    cin >> a;
    cout << "Integer entered: " << a;

    cout << endl;

    cout << "Enter integer: ";
    cin >> z;
    cout << "Integer entered: " << z;

    cout << endl;

    cout << "Enter integer: ";
    cin >> z;
    cout << "Integer entered: " << z;

    cout << endl;

    cout << "Enter floating point: ";
    cin >> z;
    cout << "Floating point entered: " << z;

    cout << endl;

    cout << "Enter floating point and integer: ";
    cin >> z >> a;
    cout << "Input entered: " << z << " " << a;

    cout << endl;

    cout << "Enter integer and integer: ";
    cin >> a >> b;
    cout << "2 Integer entered: " << a << " " << b;

    cout << endl;

    cout << "Enter  integer  and floating point: ";
    cin >> a >> z;
    cout << "Input entered: " << a << " " << z;

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
