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
/*
* Create a new node.
* Store data in the new node.
* If there are no nodes in the list
*    Make the new node the first node.
* Else
*    Find the first node whose value is greater than or equal to the new
*        value or the end of the list (whichever is first).
*    Insert the new node before the found node or at the end of the list
*        if no such node was found.
* End if
*/
void NumberList::appendNode(double num)
{
    ListNode *newNode;                // A new node
    ListNode *nodePtr;                // To traverse the list
    ListNode *previousNode = nullptr; // The previous node

    // Allocate a new node and store num there.
    newNode = new ListNode;
    newNode->next = nullptr;

    // If there are no nodes in the list
    // make newNode the first node.
    if (!head)
        head = newNode;
    else // Otherwise, insert newNode
    {
        // Position nodePtr at the head of list.
        nodePtr = head;

        // Initialize previousNode to nullptr.
        previousNode = nullptr;

        // Skip all nodes whose value is less than num.
        while (nodePtr != nullptr && nodePtr->value < num)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }

        // If the new node is to be the 1st in the list,
        // insert it before all other nodes.
        if (previousNode == nullptr)
        {
            head = newNode;
            newNode->next = nodePtr;
        }
        else // Otherwise insert after the orevious node.
        {
            previousNode->next = newNode;
            newNode->next = nodePtr;
        }
    }
}