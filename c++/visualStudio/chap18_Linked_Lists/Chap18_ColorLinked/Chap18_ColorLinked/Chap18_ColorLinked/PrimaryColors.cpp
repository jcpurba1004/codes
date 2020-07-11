/*
*
* Jeremiah Purba
*
* Chapters 18 Programming Assignment CISC 187 Summer 2020
*
* July 9, 2020
*
* File name: PrimaryColors.cpp
*
*/

#include <iostream>
#include "PrimaryColors.h"


using namespace std;

// Destructor that traverse to all nodes and delete them.
PrimaryColors::~PrimaryColors(void)
{
    ListNode* nodePtr;       // To traverse the list
    ListNode* nextNode;      // To point to the next node

    // Position nodePtr at the head of the list
    nodePtr = head;

    // While nodePtr is not at the end of the list
    while (nodePtr != nullptr)
    {
        // Save a pointer to the next node
        nextNode = nodePtr->next;

        // Delete the current node.
        delete nodePtr;

        // Position nodePtr at the next node;
        nodePtr = nextNode;
    }

}

// Constructor to initialize the head to nullptr
PrimaryColors::PrimaryColors(void)
{
    head = nullptr;
}

// Mutator to set color
void PrimaryColors::setColor(string inputColor)
{
    // input string validation to primasy color
    if (strcmp(inputColor.c_str(), "red") == 0 ||
        strcmp(inputColor.c_str(), "green") == 0 ||
        strcmp(inputColor.c_str(), "blue") == 0)
    {
        head->colors = inputColor;
    }
    else
    {
        cout << endl << "Its not a primary color " << endl;
        cout << "Exit !!!\n\n";
        exit(EXIT_FAILURE);
    }

}

// Mutator to set next pointer
void PrimaryColors::setNext(PrimaryColors::ListNode* nextNode)
{
    head->next = nextNode;
}

// Accessor to get color
string PrimaryColors::getColor(void)
{
    return head->colors;
}

// Accessor to get next pointer
PrimaryColors::ListNode* PrimaryColors::getNext(void)
{
    return head->next;
}

/*
* Validate string input and if it is wrong,
* then show error message and exit
* Create a new node
* Store data in the new node
* If there are no node in the list
*    Make the new node the first node
* Else
*    Traverse the list to find the last node
*    Add the new node to the end of the list
* End if
*/
void PrimaryColors::appendNode(string inputColor)
{
    ListNode* newNode;   // To point to a new node
    ListNode* nodePtr;   // To move through the list

    // Low level input validation for primary color
    if ((strcmp(inputColor.c_str(), "red") != 0)
        && (strcmp(inputColor.c_str(), "green") != 0)
        && (strcmp(inputColor.c_str(), "blue") != 0))
    {
        cout << "Error !, wrong input color" << endl;
        cout << "Input color should be red, green or blue. Exit ! ";
        exit(EXIT_FAILURE);
    }

    // Allocate a new node and store num there
    newNode = new ListNode;
    newNode->colors = inputColor;
    newNode->next = nullptr;

    // If there are no nodes in the list 
    // make newNode the first node
    if (!head)
        head = newNode;
    else // Otherwise, append newNode at end
    {
        // Initialize nodePtr to head of list
        nodePtr = head;

        // Find the last node in the list
        while (nodePtr->next)
            nodePtr = nodePtr->next;

        // Append newNode as the last node
        nodePtr->next = newNode;
    }
}


/*
* Validate string input and if it is wrong,
* then show error message and exit
* Create a new node
* Store data in the new node
* If there are no nodes in the list and input position > 0
*    then return -1 and the calling function will post error message
* Else if If there are no nodes in the list and input position == 0
*    then create a new node with input color
* Else
*    Find the first node whose value is greater than or equal to the new
*    value, or the end of the list (whichever is first).
*    Insert the new node before the found node, or at the end of the list
*    if no such node was found.
* End if
*/
int PrimaryColors::insertNode(int inputPosition, string inputColor)
{
    ListNode* newNode;                  // A new node
    ListNode* nodePtr;                  // To traverse the list
    ListNode* previousNode = nullptr;   // The previous node
    int index = 0;

    // Low level input validation for primary color
    if ((strcmp(inputColor.c_str(), "red") != 0)
        && (strcmp(inputColor.c_str(), "green") != 0)
        && (strcmp(inputColor.c_str(), "blue") != 0))
    {
        cout << "Error !, wrong input color" << endl;
        cout << "Input color should be red, green or blue. Exit ! ";
        exit(EXIT_FAILURE);
    }

    // Allocate a new node and store color there
    newNode = new ListNode;
    newNode->colors = inputColor;

    // If there are no nodes in the list and input position > 0
    if (!head && (inputPosition > 0))
    {
        return -1;
    }
    // If there are no nodes in the list and input position == 0
    else if (!head && (inputPosition == 0))
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

        // Skip all nodes whose position is less than inputPosition
        while (nodePtr != nullptr && inputPosition != index)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
            index++;

        }

        if (inputPosition != index)
        {
            return -1;
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

    return 1;
}

/*
* 1. Remove the node from the list without breaking the links created by
*    the next pointers
* 2. Delete the node from the memory
*/
int PrimaryColors::deleteNode(int inputPosition)
{
    ListNode* nodePtr;      // To traverse the list
    ListNode* previousNode = nullptr; // To point to the previous node
    int index = 0;

    // If the list empty, do nothing
    if (!head)
        return -1;

    // Determine if the first node is the one.
    if (inputPosition == 0)
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
        while (nodePtr != nullptr && inputPosition != index)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
            index++;
        }

        if (inputPosition != index)
        {
            return -1;  // report no position
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

    return 0;
}

/*
* Assign List head to node pointer.
* White node pointer is not null
*   Display the value member of the node to by node pointer.
*   Assign node pointer to its own next member
* End While
*/
void PrimaryColors::displayList() const
{
    ListNode* nodePtr;   // To move through the list

    // Position nodePtr at the head of the list
    nodePtr = head;

    // While nodePtr points to a node, traverse the list
    while (nodePtr)
    {
        // Display the value in this node
        cout << nodePtr->colors << endl;

        // Move to the next node
        nodePtr = nodePtr->next;
    }
}

/*
* This method would reverse the order of the node from head
* to tail. Report -1 if the list is empty
*/
int PrimaryColors::reverseList(void)
{
    ListNode* currentColor = head;
    ListNode* previousColor = nullptr;
    ListNode* nextColor = nullptr;

    if (!head)
        return -1;

    while (currentColor != nullptr) {

        // Store next
        nextColor = currentColor->next;

        // Reverse current node's pointer
        currentColor->next = previousColor;

        // Move pointers one position ahead.
        previousColor = currentColor;

        currentColor = nextColor;
    }

    // set head to previous node
    head = previousColor;

    return 0;
}

/*
* This method search the given string input in the list.
* It validates the input color and exit if it is wrong.
* It will report the first location of matched color
*/
int PrimaryColors::searchNode(string inputColor)
{

    int index = 0;
    ListNode* currentColor = head;

    // Low level input validation for primary color
    if ((strcmp(inputColor.c_str(), "red") != 0)
        && (strcmp(inputColor.c_str(), "green") != 0)
        && (strcmp(inputColor.c_str(), "blue") != 0))
    {
        cout << "Error !, wrong input color" << endl;
        cout << "Input color should be red, green or blue. Exit ! ";
        exit(EXIT_FAILURE);
    }

    // Traverse all the link and compare the color with input color
    while (currentColor != NULL)
    {
        if (strcmp(currentColor->colors.c_str(), inputColor.c_str()) == 0)
            break;
        index++;
        currentColor = currentColor->next;
    }

    if (currentColor != NULL)
    {
        return index;
    }
    else
    {
        return -1;
    }

    return 0;
}


/*
* For EXTRA CREDIT:
* Extra credit:  offer an additional menu item that will display
* the list with secondary colors indicated where possible.
* For example: red red PURPLE blue GREEN yellow yellow yellow.  5 points EC.
*
* This function will display the secondary color based on
* the current and next color on the list
*/
void PrimaryColors::displaySecondaryColor(void) const
{
    ListNode* currentNodePtr;   // To move through the list
    ListNode* nextNodePtr;      // For next mode
    string currentColor;
    string nextColor;

    // Position nodePtr at the head of the list
    currentNodePtr = head;

    // While nodePtr points to a node, traverse the list
    while (currentNodePtr)
    {

        // Display the value in this node
        cout << currentNodePtr->colors << endl;

        if (currentNodePtr->next != nullptr)
        {
            nextNodePtr = currentNodePtr->next;
            // check current color and next color
            currentColor = currentNodePtr->colors;
            nextColor = nextNodePtr->colors;

            // red and green mix becomes yellow
            if ((strcmp(currentColor.c_str(), "red") == 0)
                && (strcmp(nextColor.c_str(), "green") == 0))
            {
                cout << "yellow" << endl;
            }
            // red and blue mix becomes purple
            else if ((strcmp(currentColor.c_str(), "red") == 0)
                && (strcmp(nextColor.c_str(), "blue") == 0))
            {
                cout << "purple" << endl;
            }
            // green and blue mix becomes cyan
            else if ((strcmp(currentColor.c_str(), "green") == 0)
                && (strcmp(nextColor.c_str(), "blue") == 0))
            {
                cout << "cyan" << endl;
            }
            // green and red mix becomes cyan
            else if ((strcmp(currentColor.c_str(), "green") == 0)
                && (strcmp(nextColor.c_str(), "red") == 0))
            {
                cout << "yellow" << endl;
            }
            // blue and red mix becomes purple
            else if ((strcmp(currentColor.c_str(), "blue") == 0)
                && (strcmp(nextColor.c_str(), "red") == 0))
            {
                cout << "purple" << endl;
            }
            // blue and green mix becomes cyan
            else if ((strcmp(currentColor.c_str(), "blue") == 0)
                && (strcmp(nextColor.c_str(), "green") == 0))
            {
                cout << "cyan" << endl;
            }
        }


        // Move to the next node
        currentNodePtr = currentNodePtr->next;
    }
}