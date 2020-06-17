// functionPrototype.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Program: Largest of three numbers

#include <iostream>

using namespace std;

//Function prototype
double larger(double x, double y);
double compareThree(double x, double y, double z);

int main()
{
    double one, two;

    cout << "Line 8: The larger of 5 and 10 is "
         << larger(5, 10) << endl;
    cout << "Line 9: Enter two numbers: ";
    cin >> one >> two;
    cout << endl;

    cout << "Line 12: The larger of " << one
         << " and " << two << " is "
         << larger(one, two) << endl;

    cout << "Line 13: The largest of 43.48, 34.00, "
         << "and 12.65 is "
         << compareThree(43.48, 34.00, 12.65)
         << endl;

    return 0;
}

double larger(double x, double y)
{
    double max;

    if (x >= y)
        max = x;
    else
        max = y;

    return max;
}

double compareThree(double x, double y, double z)
{
    return larger(x, larger(y, z));
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
