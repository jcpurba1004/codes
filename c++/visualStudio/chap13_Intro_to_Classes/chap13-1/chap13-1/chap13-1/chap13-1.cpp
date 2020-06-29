// chap13-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program demonstrates a simple class.
#include <iostream>
using namespace std;

// Rectangle class declaration.
class Rectangle
{
    private:
        double width;
        double length;
    public:
        void setWidth(double);
        void setLength(double);
        double getWidth() const;
        double getLength() const;
        double getArea() const;
};

//***************************************************************
// setWidth assigns a value to the width number.                *
//***************************************************************

void Rectangle::setWidth(double w)
{
    width = w;
}

//***************************************************************
// setLength assigns a value to the length number.                *
//***************************************************************

void Rectangle::setLength(double w)
{
    length = length;
}

//***************************************************************
// getWidth returns the value in the width number.                *
//***************************************************************

double Rectangle::getWidth() const
{
    return width;
}

//***************************************************************
// getLength returns the value in the length number.                *
//***************************************************************

double Rectangle::getLength() const
{
    return length;
}

//***************************************************************
// getArea returns the product of width times length.           *                *
//***************************************************************

double Rectangle::getArea() const
{
    return width * length;
}

//***************************************************************
// Function main                                                *
//***************************************************************

int main()
{
    Rectangle box;      // Define an instance of the Rectangle class
    double rectWidth;   // Local variable for width
    double rectLength;  // Local variable for length

    // Get the rectangle's width and length from the user.
    cout << "This program will calculate the area of a\n";
    cout << "rectangle. What is the width? ";
    cin >> rectWidth;
    cout << "What is the length? ";
    cin >> rectLength;

    // Store the width and length of the rectangle
    // in the box object.
    box.setWidth(rectWidth);
    box.setLength(rectLength);

    // Display the rectangle's data.
    cout << "Here is the rectangle's data:\n";
    cout << "Width: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "Area: " << box.getArea() << endl;
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