// unit3-11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Example: setprecision, fixed, showpoint

#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.14159265;

int main()
{
    double radius = 12.67;
    double height = 12.00;

    cout << fixed << showpoint;

    cout << setprecision(2)
         << "Line 10: setprecision(2)" << endl;
    cout << "Line 11: radius = " << radius << endl;
    cout << "Line 12: height = " << height << endl;
    cout << "Line 13: volume = "
         << PI * radius * radius * height << endl;
    cout << "Line 14: PI = " << PI << endl << endl;

    cout << setprecision(3)
         << "Line 15: setprecision(3)" << endl;
    cout << "Line 16: radius = " << radius << endl;
    cout << "Line 17: height = " << height << endl;
    cout << "Line 18: volume = "
         << PI * radius * radius * height << endl;
    cout << "Line 24: PI = " << PI << endl << endl;

    cout << "Line 25: "
         << setprecision(3) << radius << ", "
         << setprecision(2) << height << ", "
         << setprecision(5) << PI << endl;

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
