/*
*
* Jeremiah Purba
*
* Chapters 21 Programming Example CISC 187 Summer 2020
*
* July 29, 2020
*
* File name: IntBinaryTree.cpp
*
*/
#include <iostream>
#include "IntBinaryTree.h"

using namespace std;

// Constructor
IntBinaryTree::IntBinaryTree()
{
	root = nullptr;
}


// Destructor
IntBinaryTree::~IntBinaryTree()
{
	destroySubTree(root);
}

//**********************************************************************
// Public member function
// Name: insertNode
// input: integer input number
// return: none
// Purpose: validate the input from user, create a new TreeNode object
//          then call private method insert with passing parameter
//          root and new object node.
//**********************************************************************
void IntBinaryTree::insertNode(int inputNumber)
{
	TreeNode* newNode = nullptr;

	// input validation, inputNumber should be >= 0
	if (inputNumber < 0)
	{
		cout << "Error ! Wrong input integer ... Exit ! \n";
		cout << "Number should be at least zero and larger .\n";
		exit(EXIT_FAILURE);
	}
	else
	{

		// create a new node that will be inserted 
		// and store the number in it
		newNode = new TreeNode;
		newNode->data = inputNumber;
		newNode->left = newNode->right = nullptr;

		// call insert function to do insertion
		insert(root, newNode);
	}
}

//**********************************************************************
// Private member function
// Name: insert
// input: Pointer to TreeNode object for a node and new node
// return: none
// Purpose: If the tree is empty, then a new TreeNode object is a root
//          then check if the value in new node less then root, it 
//          traverse to the left recursively. Otherwise it traverse 
//          to right recursively.
//**********************************************************************
void IntBinaryTree::insert(TreeNode*& nodePtr, TreeNode*& newNode)
{
	// if tree is empty then the new node is the root
	if (!nodePtr)
	{
		nodePtr = newNode;
	}
	// check if new node data less than root data, then go to left
	else if (newNode->data < nodePtr->data)
	{
		insert(nodePtr->left, newNode);   // go through left branch
	}
	// check if new node data greater than root data, then go to right
	else
	{
		insert(nodePtr->right, newNode);  // go through right branch
	}
}

//**********************************************************************
// Public member function
// Name: displayInOrder
// input: none
// return: none
// Purpose: Display the element in the tree in order (from smaller number 
//          to larger number. It checks whether the tree is empty or not.
//          It calls displayInOrder(root) with pointer to root as an 
//          argument.
//**********************************************************************
void IntBinaryTree::displayInOrder() const
{
	if (root)
	{
		cout << "\nDisplay the tree in order: ";
		displayInOrder(root);
		cout << "\n\n";
	}
	else
	{
		cout << "Sorry, the tree is empty \n";
	}
}

//*************************************************************************
// Private member function
// Name: displayInOrder
// input: Pointer type TreeNode point to a node
// return: none
// Purpose: Display the element in the tree in order (from smaller number 
//          to larger number. As long as the node is not empty, it 
//          will traverse from left to right to print the value of element
//*************************************************************************
void IntBinaryTree::displayInOrder(TreeNode* nodePtr) const
{
	// As long as the node is not empty, it will traverse
	if (nodePtr)
	{
		// traversal to the left
		displayInOrder(nodePtr->left);
		cout << nodePtr->data;
		cout << " ";
		// traversal to the right
		displayInOrder(nodePtr->right);
	}
}


//**********************************************************************
// Public member function
// Name: leafCount
// input: none
// return: integer
// Purpose: Leaf Counter which counts and returns the number of leaf 
//          nodes in the tree. A node is a leaf if both left and right
//          child nodes of it are nullptr. Otherwise it's a branch.
//**********************************************************************
int IntBinaryTree::leafCount() const
{
	int countLeaf;

	// If root of the tree is not empty
	if (root)
	{
		cout << "Display the leaf count : ";
		countLeaf = leafCount(root);
		cout << countLeaf << "\n\n";
		return countLeaf;
	}
	else
	{
		cout << "The tree is empty \n";
		return negativeOne;
	}

}

//**********************************************************************
// Private member function
// Name: leafCount
// input: Pointer to TreeNode object 
// return: integer
// Purpose: Leaf Counter which counts and returns the number of leaf 
//          nodes in the tree. A node is a leaf if both left and right
//          child nodes of it are nullptr. Otherwise it's a branch.
//          This is recursive function
//**********************************************************************
int IntBinaryTree::leafCount(TreeNode* nodePtr) const
{
	// If the tree is empty
	if (!nodePtr)
	{
		return 0;
	}
	if ((nodePtr->left == nullptr) && (nodePtr->right == nullptr))
	{
		return positiveOne;
	}
	else
		return leafCount(nodePtr->left) + leafCount(nodePtr->right);
}

//**********************************************************************
// Public member function
// Name: height
// input: None 
// return: Integer
// Purpose: which counts and returns the height of the tree. "The height 
//          of a tree is the length of the path from the root to the 
//          deepest node in the tree. A (rooted) tree with only a node 
//          (the root) has a height of zero." It calls 
//          int IntBinaryTree::height(TreeNode* nodePtr) 
//**********************************************************************

int IntBinaryTree::height()
{
	int treeHeight;

	// If root of the tree is not empty
	if (root)
	{
		treeHeight = height(root);
		cout << "Display the tree height : ";
		if (treeHeight == 0)
		{
			cout << treeHeight << " (only root)\n\n";
		}
		else
		{
			cout << treeHeight << "\n\n";
		}
		return treeHeight;
	}
	else
	{
		cout << "The tree is empty \n";
		return negativeOne;
	}
}

//**********************************************************************
// Public member function
// Name: findMax
// input: two integer number 
// return: Integer
// Purpose: Compare two integer input number and return the larger numer  
//**********************************************************************

int IntBinaryTree::findMax(int left, int right)
{
	int maximum = 0;

	maximum = (left > right) ? left : right;  // compare input numbers

	return maximum;
}

//**********************************************************************
// Private member function
// Name: height
// input: Pointer to TreeNode object 
// return: Integer
// Purpose: which counts and returns the height of the tree. "The height 
//          of a tree is the length of the path from the root to the 
//          deepest node in the tree. A (rooted) tree with only a node 
//          (the root) has a height of zero."
//          This is recursive function
//**********************************************************************

int IntBinaryTree::height(TreeNode* nodePtr)
{
	int leftSide = 0;
	int rightSide = 0;
	int maximum = 0;

	// If the tree is empty, return 0;
	if (!nodePtr)
	{
		return negativeOne;
	}
	else
	{
		leftSide = height(nodePtr->left);

		rightSide = height(nodePtr->right);

		maximum = findMax(leftSide, rightSide);

		return  maximum + positiveOne;
	}
}


//**********************************************************************
// Public member function
// Name: widthTree
// input: None 
// return: Integer
// Purpose: which counts and returns the width of the tree - the width 
//          is the largest number of nodes in the same level.It calls
//          int IntBinaryTree::widthTree(TreeNode* nodePtr)
//**********************************************************************
int IntBinaryTree::widthTree()
{
	int treeWidth;

	// If root of the tree is not empty
	if (root)
	{
		treeWidth = widthTree(root);
		cout << "Display the tree width : ";
		if (treeWidth == 0)
		{
			cout << treeWidth << " (only root)\n\n";
		}
		else
		{
			cout << treeWidth << "\n\n";
		}
		return treeWidth;
	}
	else
	{
		cout << "The tree is empty \n";
		return negativeOne;
	}
}

//**********************************************************************
// Private member function
// Name: widthTree
// input: Pointer to TreeNode object 
// return: Integer
// Purpose: which counts and returns the width of the tree - the width 
//          is the largest number of nodes in the same level. It calls
//          int IntBinaryTree::getWidth(TreeNode* nodePtr, int level)
//**********************************************************************

int IntBinaryTree::widthTree(TreeNode* nodePtr)
{
	int maxWidth = 0;
	int treeWidth;
	int index;
	int treeHeight;

	if (nodePtr == nullptr)
	{
		return negativeOne;   // return -1 when the tree is empty
	}
	else
	{
		treeHeight = height(nodePtr);

		for (index = positiveOne; index <= treeHeight; index++)
		{
			treeWidth = calculateWidth(nodePtr, index);

			if (treeWidth > maxWidth)
			{
				maxWidth = treeWidth;

			}
		}

		return maxWidth;
	}
}

//**********************************************************************
// Public member function
// Name: getWidth
// input: Pointer to TreeNode object and integer
// return: Integer
// Purpose: which counts and returns the width of the tree - the width 
//          is the largest number of nodes in the same level. It calls
//          itself recursively
//**********************************************************************

int IntBinaryTree::calculateWidth(TreeNode* nodePtr, int level)
{
	// if tree is empty, return 0
	if (nodePtr == nullptr)
		return 0;

	if (level == positiveOne)
		return positiveOne;

	else if (level > positiveOne)
	{
		return (calculateWidth(nodePtr->left, level - positiveOne))
			+ (calculateWidth(nodePtr->right, level - positiveOne));
	}

}

//**********************************************************************
// Private member function
// Name: destroySubTree
// input: Pointer to TreeNode object 
// return: Integer
// Purpose: delete the tree
//**********************************************************************

void IntBinaryTree::destroySubTree(TreeNode* nodePtr)
{
	if (nodePtr)
	{
		// traverse left side
		if (nodePtr->left)
		{
			destroySubTree(nodePtr->left);
		}

		// traverse right side
		if (nodePtr->right)
		{
			destroySubTree(nodePtr->right);
		}

		delete nodePtr;
	}
}