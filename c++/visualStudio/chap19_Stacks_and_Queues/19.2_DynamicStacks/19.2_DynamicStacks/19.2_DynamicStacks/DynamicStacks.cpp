/**
 * Lead Author(s):
 * Jeremiah Purba; 5550010017
 *
 * Other Contributors:
 * None
 *
 * References:
 * Gaddis, T. (2015). Starting Out With Java Myprogramming Lab
 * From Control Structures Through Objects. (6th ed.). Addison-Wesley.
 *
 * Version: 1.3 (07/12/2020)
 */

// This program demonstrates the dynamic stack.
// class DynIntClass.
#include <iostream>
#include "DynIntStack.h"
using namespace std;

int main()
{
    int catchVar;  // To hold values popped off the stack

    // Create a DynIntStack object.
    DynIntStack stack;

    // Push 5, 10 and 15 onto the stack.
    cout << "Pushing 5\n";
    stack.push(5);
    cout << "Pushing 10\n";
    stack.push(10);
    cout << "Pushing 15\n";
    stack.push(15);

    // Display the value in the stack
    cout << "\nThe following are stack content " << endl;
    stack.display();

    // Pop the values off the stack and display them.
    cout << "Popping...\n";
    stack.pop(catchVar);
    cout << catchVar << endl;
    stack.pop(catchVar);
    cout << catchVar << endl;
    stack.pop(catchVar);
    cout << catchVar << endl;
    stack.pop(catchVar);
    cout << catchVar << endl;

    // Try to pop another value off the stack.
    cout << "\nAttempting to pop again... ";
    stack.pop(catchVar);
    return 0;
}