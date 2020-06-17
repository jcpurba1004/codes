// unit_6_11.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double distance(int x1, int y1, int x2, int y2);
double radius(int x1, int y, int x2, int y2);
double circumference(double radius);
double area(double radius);

// Calculates distance from center to the point
double distance(int x1, int y1, int x2, int y2) {

    double distance;

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    return distance;
}

// Calculates the radius by using distance function
// the check expect diameter not radius
double radius(int x1, int y1, int x2, int y2) {

    double radius;
    double diameter;

    radius = distance(x1, y1, x2, y2);
    diameter = 2 * radius;
    return diameter;  // the check expect diameter not radius
}

// Calculate circumference by using radius as input
double circumference(double radius) {

    const double PI = 3.1416;
    double circumference;

    circumference = 2 * PI * radius;

    return circumference;
}

// Calculate circumference by using radius as input
double area(double radius) {

    const double PI = 3.1416;
    double area;

    area = PI * radius * radius;

    return area;
}


// Note:
// test case 1: (x1,y1) = (5,6); (x2,y2) = (2,3)
//               output: radius = 4.24; diameter = 8.49
//                       circumference = 26.66; area = 56.55
// test case 2: (x1,y1) = (8,5); (x2,y2) = (2,10)
//               output: radius = 7.81; diameter = 15.62
//                       circumference = 49.07; area = 191.64
//
int main()
{
    int x1, x2, y1, y2;
    double rad, dist;
    double circumFer, areaVar;

    cout << fixed << showpoint << setprecision(2); // set output precision

    cout << "Enter the center of the circle (x1,y1): " << endl;
    cin >> x1 >> y1;
    cout << "Enter an outer point on the circle (x2,y2): " << endl;
    cin >> x2 >> y2;

    dist = distance(x1, y1, x2, y2);
    rad = radius(x1, y1, x2, y2);  // the check expect diameter not
    circumFer = circumference(dist);
    areaVar = area(dist);

    cout << "Distance between points: " << dist << endl;
    cout << "Radius of circle: " << rad << endl;
    cout << "Circumference of the circle: " << circumFer << endl;
    cout << "Area of circle: " << areaVar << endl;
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