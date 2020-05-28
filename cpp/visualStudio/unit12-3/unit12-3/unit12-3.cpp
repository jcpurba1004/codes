// unit12-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Chapter 12: Example 12-3

#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.1416;

int main()
{
    double radius;
    double *radiusPtr;

    cout << fixed << showpoint << setprecision(2);

    radius = 2.5;
    radiusPtr = &radius;

    cout << "Line 12: Radius = " << radius
         << ", area = " << PI * radius * radius
         << endl;

    cout << "Line 13: Radius = " << *radiusPtr
         << ", area = "
         << PI * (*radiusPtr) * (*radiusPtr)
         << endl;

    cout << "Line 14: Enter the radius = ";
    cin >> *radiusPtr;
    cout << endl;
    cout << "Line 17: Radius = " << radius << ", area = "
         << PI * radius * radius << endl;
    cout << "Line 18: Radius = " << *radiusPtr
         << ", area = "
         << PI * (*radiusPtr) * (*radiusPtr) << endl
         << endl;

    cout << "Line 19: Address of radiusPtr: "
         << &radiusPtr << endl;
    cout << "Line 20: Value stored in radiusPtr: "
         << &radiusPtr << endl;
    cout << "Line 21: Address of radius: "
         << radius << endl;
    cout << "Line 22: Value stored in radius: "
         << radius << endl;

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
