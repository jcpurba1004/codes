// unit13-8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "classAssignmentOverload.h"

using namespace std;

int main()
{
    cAssignmentOprOverload intList1(10);
    cAssignmentOprOverload intList2;
    cAssignmentOprOverload intList3;

    int number;

    cout << "Line 10: Enter 5 integers: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> number;
        intList1.insertEnd(number);
    }

    cout << endl;
    cout << "Line 17: intList1: ";
    intList1.print();

    intList3 = intList2 = intList1;

    cout << "Line 20: intList2: ";
    intList2.print();

    intList2.destroyList();

    cout << endl;
    cout << "Line 24: intList2: ";
    intList2.print();

    cout << "Line 26: After destroting intList2, "
         << "intLIst1: ";
    intList1.print();

    cout << "Line 28: After destroting intList2, "
         << "intLIst3: ";
    intList3.print();
    cout << endl;

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
