// IntroductionQueueADT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program demonstrates the IntQueue class.
#include <iostream>
#include "IntQueue.h"
#include "IntroductionQueueADT.h"
using namespace std;

int main()
{
    const int MAX_VALUES = 5;   // Max number of values

    // Create an IntQueue to hold the values.
    IntQueue iQueue(MAX_VALUES);

    // Enqueue a series of items.
    cout << "Enqueing " << MAX_VALUES << " items...\n";
    for (int x = 0; x < MAX_VALUES; x++)
        iQueue.enqueue(x);

    // Attempt to enqueue just one more item.
    cout << "Now attempting to enqueue again...\n";
    iQueue.enqueue(MAX_VALUES);

    // Dequeue and retrieve all items in the queue
    cout << "The values in the queue were:\n";
    while (!iQueue.isEmpty())
    {
        int value;
        iQueue.dequeue(value);
        cout << value << endl;
    }
    return 0;
}