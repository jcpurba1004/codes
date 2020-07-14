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

// Specification file for the DynIntStack class
#ifndef DYNINTSTACK_H
#define DYNINTSTACK_H

class DynIntStack
{
private:
	 // Structure for stack nodes
	 struct StackNode
	 {
		 int value;          // Value in the node
		 StackNode* next;    // Pointer to the next node
	 };

	 StackNode *top;         // Pointer to the stack top

public:
	 // Constructor
	 DynIntStack()
		  { top = nullptr; }

	 // Destructor
	 ~DynIntStack();

	 // Stack operations
	 void push(int);
	 void pop(int &);
	 bool isEmpty();
	 void display() const;
};
#endif