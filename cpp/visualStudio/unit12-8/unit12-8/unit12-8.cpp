// unit12-8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ptrMemberVarType.h"

using namespace std;

void testCopyConst(ptrMemberVarType temp);

int main()
{
    ptrMemberVarType listOne;

    int num;

    cout << "Line 9: Enter 5 integers." << endl;

    for (int index = 0; index < 5; index++)
    {
        cin >> num;
        listOne.insertAt(index, num);
    }

    cout << "Line 15: listOne: ";
    listOne.print();
    cout << endl;

       //Declare listTwo and initialize it using listOne
    ptrMemberVarType listTwo(listOne);

    cout << "Line 19: listTwo: ";
    listTwo.print();
    cout << endl;

    listTwo.insertAt(5, 34);
    listTwo.insertAt(2, -76);

    cout << "Line 24: After modifying listTwo: ";
    listTwo.print();
    cout << endl;

    cout << "Line 27: After modifying listTwo, "
         << "listOne: ";
    listOne.print();
    cout << endl;

    cout << "Line 30: Calling the function testCopyConst"
         << endl;

        //Call function testCopyConst
    testCopyConst(listOne);

    cout << "Line 32: After a call to the function "
         << "testCopyConst, " << endl;
         << "         listOne is: ";

    listOne.print();
    cout << endl;

    return 0;
}

void testCopyConst(ptrMemberVarType temp)
{
    cout << "Line 39: *** Inside the function "
         << "testCopyConst ***" << endl;

    cout << "Line 40: Object temp data: ";
    temp.print();
    cout << endl;

    temp.insertAt(3, -100);
    cout << "Line 44: After changing temp : ";
    temp.print();
    cout << endl;

    cout << "Line 47: *** Exiting the function "
         << "testCopyConst ***" << endl;
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