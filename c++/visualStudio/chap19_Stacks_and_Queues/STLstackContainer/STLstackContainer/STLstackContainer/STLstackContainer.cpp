// STLstackContainer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program demonstrates the STL stack
// container adapter.
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    const int MAX = 8;    // Max value to store in the stack
    int count;            // Loop counter

    // Define an STL stack
    stack< int, vector<int> > iStack;

    // Push values onto the stack.
    for (count = 2; count < MAX; count += 2)
    {
        cout << "Pushing " << count << endl;
        iStack.push(count);
    }

    // Display the size of the stack.
    cout << "The size of the stack is ";
    cout << iStack.size() << endl;

    // Pop the values off the stack.
    for (count = 2; count < MAX; count += 2)
    {
        cout << "Popping " << iStack.top() << endl;
        iStack.pop();
    }
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