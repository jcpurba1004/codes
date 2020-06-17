// unit14-14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// The user program that uses the class circleType

#include <iostream>
#include <iomanip>
#include "circleType.h"
#include "negativeNumber.h"

using namespace std;

int main()
{
    circleType circle;

    double radius;

    cout << fixed << showpoint << setprecision(2);

    try
    {
        cout << "Line 13: Enter the radius "
             << "of a circle: ";
        cin >> radius;
        cout << endl;

        circle.setRadius(radius);

        cout << "Line 17: circle - "
             << "radius: " << circle.getRadius()
             << ", area: " << circle.area()
             << ", circumference: "
             << circle.circumference() << endl;
    }
    catch (negativeNumber obj)
    {
        cout << "Line 21: " << obj.what() << endl;
    }

    return 0;
}//end main

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file