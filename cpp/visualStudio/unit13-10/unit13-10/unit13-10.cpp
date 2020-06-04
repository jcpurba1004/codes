// unit13-10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//This program shows how to use the class template listType.

#include <iostream>

#include "myString.h"
#include "listType.h"

using namespace std;

int main()
{
    listType<int> intList(100);
    listType<newString> stringList;

    int index;
    int number;

    cout << "List 11: Processing the integer list"
         << endl;
    cout << "List 12: Enter 5 integers: ";

    for (index = 0; index < 5; index++)
    {
        cin >> number;
        intList.insertAt(number, index);
    }

    cout << endl;
    cout << "List 19: intList: ";
    intList.print();
    cout << endl;

      //Sort intList
    intList.sort();

    cout << "Line 23: After sorting, intList: ";
    intList.print();
    cout << endl;

    newString str;

    cout << "Line 27: Processing the string list"
         << endl;
    cout << "Line 28: Enter 5 strings: ";

    for (index = 0; index < 5; index++)
    {
        cin >> str;
        stringListAt(str, index);
    }

    cout << endl;
    cout << "Line 35: stringList: ";
    stringList.print();
    cout << endl;

     //Sort stringList
    stringList.sort();

    cout << "Line 39: After sorting, stringList: ";
    stringList.print();
    cout << endl;

    int intListSize;

    cout << "Line 43: Enter the size of the integer "
         << "list: ";
    cin >> intListSize;
    cout << endl;

    listType<int> intList2(intListSize);

    cout << "Line 47: Processing the integer list"
         << endl;
    cout << "Line 48: Enter " << intListSize
         << " integers: ";

    for (index = 0; index < intListSize; index++)
    {
        cin >> number;
        intList2.insertAt(number, index);
    }

    cout << endl;

    cout << "Line 55: intList2: ";
    intList2.print();
    cout << endl;

      //Sort intList2
    intList2.sort();

    cout << "Line 59: After sorting, intList2: ";
    intList2.print();
    cout << endl;
    cout << "Line 62: Length of intList2: "
         << intList2.getLength() << endl;
    cout << "Line 63: Maximum size of intList2: "
         << intList2.getMaxSize() << endl;

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
