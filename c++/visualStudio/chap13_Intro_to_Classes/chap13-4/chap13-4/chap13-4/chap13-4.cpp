// chap13-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program uses smart pointers to allocate three
// instances of the Rectangle class.
#include <iostream>
#include <memory>
using namespace std;

// Rectangle class declaration.

//*******************************************
// Function main                            *
//*******************************************

int main()
{
    double number;        // To hold a number
    double totalArea;     // The total area

    // Dynamically allocate the objects.
    unique_ptr<Rectangle> kitchen(new Rectangle);
    unique_ptr<Rectangle> bedroom(new Rectangle);
    unique_ptr<Rectangle> den(new Rectangle);

    // Get the kitchen dimensions.
    cout << "What is the kitchen's length? ";
    cin >> number;                           // Get the length
    kitchen->setLength(number);              // Store in kitchen object
    cout << "What is the kitchen's width? ";
    cin >> number;                           // Get the width
    kitchen->setWidth(number);               // Store in kitchen object

    // Get the bedroom dimensions.
    cout << "What is the bedroom's length? ";
    cin >> number;                           // Get the length
    bedroom->setLength(number);              // Store in bedroom object
    cout << "What is the bedroom's width? ";
    cin >> number;                           // Get the width
    bedroom->setWidth(number);               // Store in bedroom object

    // Get the den dimensions.
    cout << "What is the den's length? ";
    cin >> number;                           // Get the length
    den->setLength(number);                  // Store in den object
    cout << "What is the den's width? ";
    cin >> number;                           // Get the width
    den->setWidth(number);                   // Store in den object

    // Calculate the total area of the three rooms
    totalArea = kitchen.getArea() + bedroom.getArea() +
                den.getArea();

    // Display the total area of the three rooms.
    cout << "The total area of the three rooms is "
         << totalArea << endl;

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