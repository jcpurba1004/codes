// unit3-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

    cout << "Enter double, character and integer: ";
    cin >> z >> ch >> a;
    cout << "Double, character and integer entered: " << z << " " << ch << " " << a;

    cout << endl;

    cout << "Enter double, character and integer: ";
    cin >> z >> ch >> a;
    cout << "Double, character and integer entered: " << z << " " << ch << " " << a;

    cout << endl;

    cout << "Enter 2 integer and double: ";
    cin >> a >> b >> z;
    cout << "2 integer and double entered: " << a << " " << b << " " << z;

    cout << endl;

    cout << "Enter  integer and double: ";
    cin >> a >> z;
    cout << "Integer and double entered: " << a << " " << z;

    cout << endl;

    cout << "Enter  character and integer: ";
    cin >> ch >> a;
    cout << "Character and integer entered: " << ch << " " << a;

    cout << endl;

    cout << "Enter  integer and character: ";
    cin >> a >> ch;
    cout << "Integer and character entered: " << a << " " << ch;

    cout << endl;

    cout << "Enter  2 character: ";
    cin >> ch1 >> ch2;
    cout << "2 Character entered: " << ch1 << " " << ch2;

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
