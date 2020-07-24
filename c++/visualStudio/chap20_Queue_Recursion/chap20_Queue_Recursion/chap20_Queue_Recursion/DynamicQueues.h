/*
*
* Jeremiah Purba
*
* Chapters 20 Programming Example CISC 187 Summer 2020
*
* July 23, 2020
*
* File name: DynamicQueues.h
*
*/
#ifndef DYNAMICQUEUES_H
#define DYNAMICQUEUES_H

#include <string>
using namespace std;


class DynamicQueues
{
private:
	struct QueueNode
	{
		string name;        // Name can sccept 2 words
		int    numberOfKid; // For number of kids
		QueueNode* next;    // Pointer to the next node
	};

	QueueNode* front;       // The front of the queue
	QueueNode* rear;        // The rear of the queue
	int numItems;           // Number of Items in the queue public

	// Recursive methods
	int countNodes(QueueNode*) const;

public:

	// Constructor
	DynamicQueues();

	// Destructor
	~DynamicQueues();

	// Queue operations
	void enqueue(string, int);
	void dequeue(string&, int&);
	bool isEmpty();
	void clear();
	void numNodes();
	int searchKid();
	int searchName(string);
	void displayQueue() const;
	int getNumberItems();
	void deleteNodeName(string);
	void deleteNodeKid(int);
	int findName(QueueNode*, string, int&);
	int findKid(QueueNode*, int&, int&, int&, string&);
};


// Constant
const int maxNameLength = 20;
const int maxInteger = 500;
const int minusBigNumber = -9999999;

// Function Prototype

void menu(void);
void enqueueNode(DynamicQueues& list);
bool validateString(const string& stringInput);
void countCars(DynamicQueues& list);
void dequeueNode(DynamicQueues& list);
void printQueue(DynamicQueues& list);
void moveFriend(DynamicQueues& list);
void moveCarKid(DynamicQueues& list);


#endif // DYNAMICQUEUES_H


