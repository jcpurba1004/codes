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
* Create a new node
* Store data in the new node
* If there are no node in the list
*    Make the new node the first node
* Else
*    Traverse the list to find the last node
*    Add the new node to the end of the list
* End if
*/
void NumberList::appendNode(double num)
{
    ListNode* newNode;   // To point to a new node
    ListNode* nodePtr;   // To move through the list

    // Allocate a new node and store num there
    newNode = new ListNode;
    newNode->value = num;
    newNode->next = nullptr;

    // If there are no nodes in the list 
    // make newNode the first node
    if (!head)
        head = newNode;
    else // Otherwise, insert newNode at end
    {
        // Initialize nodePtr to head of list
        nodePtr = head;

        // Find the last node in the list
        while (nodePtr->next)
            nodePtr = nodePtr->next;

        // Insert newNode as the last node
        nodePtr->next = newNode;
    }
}

/*
* Assign List head to node pointer.
* White node pointer is not null
*   Display the value member of the node to by node pointer.
*   Assign node pointer to its own next member
* End While
*/
void NumberList::displayList() const
{
    ListNode* nodePtr;   // To move through the list

    // Position nodePtr at the head of the list
    nodePtr = head;

    // While nodePtr points to a node, traverse the list
    while (nodePtr)
    {
        // Display the value in this node
        cout << nodePtr->value << endl;

        // Move to the next node
        nodePtr = nodePtr->next;
    }
}

/*
* Create a new node
* Store data in the new node
* If there are no nodes in the list
*    Make the new node the first node
* Else
*    Find the first node whose value is greater than or equal to the new
*    value, or the end of the list (whichever is first).
*    Insert the new node before the found node, or at the end of the list
*    if no such node was found.
* End if
*/
void NumberList::insertNode(double num)
{
    ListNode* newNode;                  // A new node
    ListNode* nodePtr;                  // To traverse the list
    ListNode* previousNode = nullptr;   // The previous node

    // Allocate a new node and store num there
    newNode = new ListNode;
    newNode->value = num;

    // If there are no nodes in the list
    // make newNode the first node
    if (!head)
    {
        head = newNode;
        newNode->next = nullptr;
    }
    else // otherwise, insert newNode
    {
        // Position nodePtr at the head of list
        nodePtr = head;

        // Initialize previousNode to nullptr
        previousNode = nullptr;

        // Skip all nodes whose value is less than num
        while (nodePtr != nullptr && nodePtr->value < num)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }

        // If the new node is to be the 1st in the list
        // insert it before all other nodes
        if (previousNode == nullptr)
        {
            head = newNode;
            newNode->next = nodePtr;
        }
        else
        {
            previousNode->next = newNode;
            newNode->next = nodePtr;
        }
    }
}

/*
* 1. Remove the node from the list without breaking the links created by
*    the next pointers
* 2. Delete the node from the memory
*/
void NumberList::deleteNode(double num)
{
    ListNode* nodePtr;      // To traverse the list
    ListNode* previousNode = nullptr; // To point to the previous node

    // If the list empty, do nothing
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
        // not equal to num
        while (nodePtr != nullptr && nodePtr->value != num)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }
        // If nodeptr is not at the end of the list
        // link the previous node to the node after
        // nodePtr, then delete nodePtr.
        if (nodePtr)
        {
            previousNode->next = nodePtr->next;
            delete nodePtr;
        }
    }
}