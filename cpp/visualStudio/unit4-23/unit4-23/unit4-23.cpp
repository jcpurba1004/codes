// unit4-23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Program: Effect of break statements in a switch structure

#include <iostream>

using namespace std;

int main()
{
    int num; 

    cout << "Enter an integer between 0 and 7: ";
    cin >> num;
    cout << endl;

    switch (num)
    {
    case 0:
    case 1:
        cout << "Learning to use ";
    case 2:
        cout << "C++'s ";
    case 3:
        cout << "switch structure." << endl;
        break;
    case 4:
        break;
    case 5:
        cout << "This program shows the effect ";
    case 6:
    case 7:
        cout << "of the break statement." << endl;
        break;
    default:
        cout << "The number is out of range." << endl;
    }

    cout << "Out of the switch structure." << endl;

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
