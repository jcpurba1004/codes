// StaticQueueTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program demonstrates the Queue template.
#include <iostream>
#include <string>
#include "Queue.h"
#include "StaticQueueTemplate.h"
using namespace std;

int main()
{
    string name;

    // Create a Queue.
    Queue<string> queue(QUEUE_SIZE);

    // Enqueue some names.
    for (int count = 0; count < QUEUE_SIZE; count++)
    {
        cout << "Enter a name: ";
        getline(cin, name);
        queue.enqueue(name);
    }

    // Dequeue the names and display them.
    cout << "\nHere are the names you entered:\n";
    for (int count = 0; count < QUEUE_SIZE; count++)
    {
        queue.dequeue(name);
        cout << name << endl;
    }
    return 0;
}