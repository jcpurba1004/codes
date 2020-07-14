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

#include <iostream>
#include "DynIntStack.h"
using namespace std;

//***************************************************
// Destructor                                       *
// This function deletes every node in the list.    *
//***************************************************

DynIntStack::~DynIntStack()
{
	StackNode *nodePtr = nullptr;
	StackNode *nextNode = nullptr;

	// Position nodePtr at the top of the stack
	nodePtr = top;

	// Traverse the list deleting each node.
	while (nodePtr != nullptr)
	{
		nextNode = nodePtr->next;
		delete nodePtr;
		nodePtr = nextNode;
	}
}

//***************************************************
// Member function push pushes the argument onto    *
// the stack.                                       *
//***************************************************

void DynIntStack::push(int num)
{
	StackNode *newNode = nullptr; // Pointer to a new node

	// Allocate a new node and store num there.
	newNode = new StackNode;
	newNode->value = num;

	// If there are no nodes in the list
	// make newNode the first node.
	if (isEmpty())
	{
		top = newNode;
		newNode->next = nullptr;
	}
	else  // Otherwise, insert NewNode before top.
	{
		newNode->next = top;
		top = newNode;
	}
}

//***************************************************
// Member function pop pops the value at the top    *
// of the stack off and copies it into the variable *
// passed as an argument.                           *
//***************************************************

void DynIntStack::pop(int& num)
{
	StackNode *temp = nullptr;  // Temporary pointer

	// First make sure the stack isn't empty.
	if (isEmpty())
	{
		cout << "The stack is empty.\n";
	}
	else // pop value off top of stack
	{
		num = top->value;
		temp = top->next;
		delete top;
		top = temp;
	}
}

//****************************************************
// Member function isEmpty returns true if the stack *
// is empty or false otherwise.                      *
//****************************************************

bool DynIntStack::isEmpty()
{
	bool status;

	if (!top)
		status = true;
	else
		status = false;

	return status;
}


//****************************************************
// Member function display would print stack content *
// to screen.                                        *
//****************************************************
void DynIntStack::display() const
{
	StackNode* nodePtr;    // To move through the list

	// Position nodePtr at the top of the stack
	nodePtr = top;

	// While nodePtr points to a node, traverse the list
	while (nodePtr)
	{

		// Display the value in this node
		cout << nodePtr->value << endl;

		// Move to the next node
		nodePtr = nodePtr->next;
	}
}