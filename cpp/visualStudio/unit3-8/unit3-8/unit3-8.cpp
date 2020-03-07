// unit3-8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Input Failure program

#include <iostream>
#include <string>

using namespace std;
int main()
{
    string name;
    int age = 0;
    int weight = 0;
    double height = 0.0;

    cout << "Line 10: Enter name, age, weight and "
        << "height: ";
    cin >> name >> age >> weight >> height;
    cout << endl;

    cout << "Line 13: Name: " << name << endl;
    cout << "Line 14: Age: " << age << endl;
    cout << "Line 15: Weight: " << weight << endl;
    cout << "Line 16: Height: " << height << endl;

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
