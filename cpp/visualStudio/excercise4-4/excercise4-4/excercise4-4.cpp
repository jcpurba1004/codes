// excercise4-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

const double PI = 3.1416;

int main()
{
    string shape;
    double height;
    double length;
    double width;
    double radius;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the shape type: (rectangle, circle, cylinder) ";
    cin >> shape;
    cout << endl;

    if (shape == "rectangle")
    {
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << endl;

        cout << "Enter the width of the rectangle: ";
        cin >> width;
        cout << endl;

        cout << "Area of the rectangle = "
            << length * width << endl;

        cout << "Perimeter of the rectangle = "
            << 2 * (length + width) << endl;

    }
    else if (shape == "circle")
    {

        cout << "Enter the radius of the circle: ";
        cin >> radius;
        cout << endl;

        cout << "Area of the circle = "
            << PI * pow(radius, 2.0) << endl;

        cout << "Circumference of the circle: "
            << 2 * PI * radius << endl;

    }
    else if (shape == "cylinder")
    {

        cout << "Enter the height of the cylinder: ";
        cin >> height;
        cout << endl;

        cout << "Enter the radius of the base of the cylinder: ";
        cin >> radius;
        cout << endl;

        cout << "Volume of the cylinder = "
            << PI * pow(radius, 2.0) * height << endl;

        cout << "Surface area of the cylinder: "
            << 2 * PI * radius * height + 2 * PI * pow(radius, 2.0)
            << endl;

    }
    else
        cout << "The program does not handle " << shape << endl;

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
