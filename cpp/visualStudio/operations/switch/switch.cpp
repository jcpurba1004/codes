// switch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    
    int age = 18;

    switch (age) {
        case 16:
            cout << "hey you can drive now!" << endl;
            break;
        case 18:
            cout << "go buy some lotto tickets~!" << endl;
            break;
        case 21:
            cout << "buy me some beer" << endl;
            break;
        default:
            cout << "sorry you get nothing" << endl;
    }

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
