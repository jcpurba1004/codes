// petType.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "petType.h"
#include "dogType.h"

using namespace std;

void callPrint(petType *p);

int main()
{
    petType *q;
    dogType *r;

    q = new petType("Lucky");
    r = new dogType("Tommy", "German Shepherd");

    q->pirnt();
    cout << endl;
    r->pirnt();

    cout << "*** Calling the function callPrint ***"
         << endl;
    callPrint(q);
    cout << endl;
    callPrint(r);

    return 0;
}

void callPrint(petType* p)
{
    p->print();
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
