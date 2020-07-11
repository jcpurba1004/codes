// NumberList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "NumberList.h"

using namespace std;

NumberList::~NumberList(void)
{
    cout << "NumberList destructor\n";
}

NumberList::NumberList(void)
{
    head = nullptr;
    cout << "NumberList constructor\n";
}

void NumberList::deleteNode(double num)
{
    ListNode *nodePtr;                // To traverse the list
    ListNode *previousNode = nullptr; // To point to the previous node

    // If the list is empty, do nothing
    if (!head)
        return;

    // Determine if the first node is the one.
    if (head->value == num)
    {
        nodePtr = head->next;
        delete head;
        head = nodePtr;
    }
    else
    {
        // Initialize nodePtr to head of list
        nodePtr = head;

        // Skip all nodes whose value member is
        // not equal to num.
        while (nodePtr != nullptr && nodePtr->value != num)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }

        // If nodePtr is not at the end of the list,
        // link the previous node to the node after
        // modePtr, then delete ndePtr.
        if (nodePtr)
        {
            previousNode->next = nodePtr->next;
            delete nodePtr;
        }
    }
}