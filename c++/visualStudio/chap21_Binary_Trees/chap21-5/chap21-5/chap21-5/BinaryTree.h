#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <iostream>
using namespace std;

// BinaryTree template
template <class T>
class BinaryTree
{
private:
	struct TreeNode
	{
		T value;            // The value in the node
		TreeNode *left;     // Pointer to left child node
		TreeNode *right;    // Pointer to right child node
	};

	TreeNode *root;  // Pointer to the root node

	// Private member functions
	void insert(TreeNode *&, TreeNode *&);
	void destroySubTree(TreeNode *);
	void deleteNode(T, TreeNode *&);
	void makeDeletion(TreeNode *&);
	void displayInOrder(TreeNode *) const;
	void displaypreOrder(TreeNode *) const;
	void displayPostOrder(TreeNode *) const;

public:
	// Constructor
	BinaryTree()
		{ root = nullptr; }

	// Destructor
	~BinaryTree()
		{ destroySubTree(root); }

	// Binary tree operations
	void insertNode(T);
	bool searchNode(T);
	void remove(T);

	void displayInOrder() const
		{ displayInOrder(root); }

	void displayPreOrder() const
		{ displayPreOrder(root); }\

	void displayPostOrder() const
		{ displayPostOrder(root); }
};

//*************************************************************
// insert accepts a TreeNode pointer and a pointer to a node. *
// The function inserts the node into the tree pointed to by  *
// the TreeNode pointer. This function is called recursively. *
//*************************************************************
template <class T>
void BinaryTree<T>::insert(TreeNode*& nodePtr, TreeNode*& newNode)
{
	if (nodePtr == nullptr)
		nodePtr = newNode;              // Insert the node
	else if (newNode->value < nodePtr->value)
		insert(nodePtr->left, newNode); // Search the left branch
	else
		insert(nodePtr->right, newNode); // Search the right branch
}

//*********************************************************
// insertNode creates a new node to hold num as its value *
// and passes it to the insert function.                  *
//*********************************************************
template <class T>
void BinaryTree<T>::insertNode(T item)
{
	TreeNode *newNode = nullptr;   // Pointer to a new node

	// Create a new node and store num in it.
	newNode = new TreeNode;
	newNode->value = item;
	newNode->left = newNode->right = nullptr;

	// Insert the node.
	insert(root, newNode);
}