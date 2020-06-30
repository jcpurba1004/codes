// chap13-11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program demonstrates a destructor.
#include <iostream>
using namespace std;

class Demo
{
public:
    Demo();     // Constructor
    ~Demo();    // Destructor
};

Demo::Demo()
{
    cout << "Welcome to the constructor!\n";
}

Demo::~Demo()
{
    cout << "The destructor is now running.\n";
}

int main()
{
    Demo demoObject;   // Define a demo object;

    cout << "This program demonstrates an object\n";
    cout << "with a constructor and destructor.\n";
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