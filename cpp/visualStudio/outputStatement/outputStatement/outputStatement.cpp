// outputStatement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program illustrates how output statements work.

#include <iostream>                     //Line 1

using namespace std;                    //Line 2

int main()                              //Line 3
{                                       //Line 4
    int a, b;                           //Line 5

    a = 65;                             //Line 6
    b = 78;                             //Line 7

    cout << 29 / 4 << endl;             //Line 8
    cout << 3.0 / 2 << endl;            //Line 9
    cout << "Hello there.\n";           //Line 10
    cout << 7 << endl;                  //Line 11
    cout << 3 + 5 << endl;              //Line 12
    cout << "3 + 5";                    //Line 13
    cout << " **";                      //Line 14
    cout << endl;                       //Line 15
    cout << 2 + 3 * 6 << endl;          //Line 16
    cout << "a" << endl;                //Line 17
    cout << a << endl;                  //Line 18
    cout << b << endl;                  //Line 19

    return 0;                           //Line 20
}                                       //Line 21

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
