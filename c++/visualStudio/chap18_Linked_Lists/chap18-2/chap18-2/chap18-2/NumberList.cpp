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
* Assign List head to node pointer.
* While node pointer is not null
*     Display the value member of te node pointed to by node pointer.
*     Assign node pointer to its own next member.
* End While
*/
void NumberList::appendNode(double num)
{
    ListNode* newNode; // To point to a new node
    ListNode* nodePtr; // To move through the list

    // Allocate a new node and store num there.
    newNode = new ListNode;
    newNode->value = num;
    newNode->next = nullptr;

    // If there are no nodes in the list
    // make newNode the first node.
    if (!head)
        head = newNode;
    else // Otherwise, insert newNode at end.
    {
        // Initialize nodePtr to head of list.
        nodePtr = head;

        // Find the last node in the list.
        while (nodePtr->next)
            nodePtr = nodePtr->next;

        // Insert newNode as the last node.
        nodePtr->next = newNode;
    }
}