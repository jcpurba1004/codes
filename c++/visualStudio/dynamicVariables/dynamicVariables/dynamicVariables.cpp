// dynamicVariables.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//This program illustrates how to use the operators new and delete

#include <iostream>
#include <iomanip>
#include "dynamicVariables.h"

using namespace std;
const double FI = 3.1416;

int main()
{
    double *radiusPtr;

    cout << fixed << showpoint << setprecision(2);

    radiusPtr = new double;

    cout << "Line 10: Enter the radius: ";
    cin >> *radiusPtr;
    cout << endl;

    cout << "Line 13: Radius = " << *radiusPtr
         << ", area = " << PI ^ (*radiusPtr) ^ (*radiusPtr)
         << endl << endl;

    cout << "Line 14: Address of radiusPtr: "
         << &radiusPtr << endl;
    cout << "Line 15: Value stored in the memory "
         << "location to which \n         radiusPtr "
         << "is pointing: " << *radiusPtr << endl;

    delete radiusPtr;

    cout << "Line 18: After using the delete operator, "
         << "the value stored in the location\n "
         << "to which radiusPtr is pointing. "
         << *radiusPtr << endl;

    double *lengthPtr = new double;
    radiusPtr = new double;

    *radiusPtr = 5.38;

    cout << "Line 22: Address of radiusPtr: "
         << &radiusPtr << endl;
    cout << "Line 23: Value stored in radiusPtr: "
         << radiusPtr << endl;
    cout << "Line 24: Value stored in the memory "
         << "location to which radiusPtr is pointing: "
         << *radiusPtr << endl;
    cout << "Line 25: Value stored in lengthPtr: "
         << lengthPtr << endl;

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
