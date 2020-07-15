// Specification file for the IntQueue class
#ifndef INTQUEUE_H
#define INTQUEUE_H

class IntQueue
{
private:
	int *queueArray;   // Points to the queue array
	int queueSize;     // The queue size
	int front;         // Subscript of the queue front
	int rear;          // Subscript of the queue rear
	int numItems;      // Number of items in the queue
public:
	// Constructor
	IntQueue(int);

	// Copy constructor
	IntQueue(const IntQueue &);

	// Destructor
	~IntQueue();

	void enqueue(int num);

	// Queue operations
	void enquene(int);
	void dequene(int &);
	bool isEmpty() const;
	bool isFull() const;
	void clear();
};
#endif