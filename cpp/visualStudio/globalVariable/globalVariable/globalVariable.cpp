// globalVariable.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Global variable

#include <iostream> 

using namespace std;

int t;    //global variable

void funOne(int& a);

int main()
{
    t = 15;

    cout << "Line 8: In main: t = " << t << endl;

    funOne(t);

    cout << "Line 10: In main after funOne: "
         << " t = " << t << endl;

    return 0;
}

void funOne(int& a)
{
    cout << "Line 15: In funOne: a = " << a
         << " and t = " << t << endl;

    a = a + 12;
    cout << "Line 17: In funOne: a = " << a
         << " and t = " << t << endl;

    t = t + 13;

    cout << "Line 19: In funOne: a = " << a
         << " and t = " << t << endl;
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
