/**** binaryTree.cpp ***/

//IntBinarytree.cpp

#include "stdafx.h"

#include "binaryTree.h"

#include <iostream>

#include <iomanip>

#include <algorithm>  

using namespace std;

//Default Constructor initializes head to nullptr

IntBinaryTree::~IntBinaryTree()
{

	destroySubTree(root);

}

void IntBinaryTree::destroySubTree(TreeNode *node)
{

	if (node)
	{

		if (node->left)
		{

			destroySubTree(node->left);

		}

		if (node->right)
		{

			destroySubTree(node->right);

		}

		delete node;

	}

}

void IntBinaryTree::insert(TreeNode*& node, TreeNode*& newNode)
{

	if (!node)
	{

		node = newNode;

	}

	else if (newNode->data < node->data)
	{

		insert(node->left, newNode); //Search the left branch

	}

	else
	{

		insert(node->right, newNode); //Search the right branch

	}

}

void IntBinaryTree::insertNode(int number)
{

	TreeNode* newNode = nullptr;

	newNode = new TreeNode;

	newNode->data = number;

	newNode->left = newNode->right = nullptr;

	insert(root, newNode);

}

void IntBinaryTree::displayInOrder(TreeNode* node) const
{

	if (node)
	{

		displayInOrder(node->left);

		cout << node->data;

		cout << " ";

		displayInOrder(node->right);

	}

}

void IntBinaryTree::displayPreOrder(TreeNode* node) const
{

	if (node)
	{

		cout << node->data;

		cout << " ";

		displayPreOrder(node->left);

		displayPreOrder(node->right);

	}

}

void IntBinaryTree::displayPostOrder(TreeNode* node) const
{

	if (node)
	{

		displayPreOrder(node->left);

		displayPreOrder(node->right);

		cout << node->data;

		cout << " ";

	}

}

int IntBinaryTree::leafCount() const
{

	return leafCount(root);

}

int IntBinaryTree::leafCount(TreeNode* node) const {

	if (!node) {

		return 0;

	}

	if (node->left == NULL && node->right == NULL)

		return 1;

	else

		return leafCount(node->left) + leafCount(node->right);

}

int IntBinaryTree::height() const {

	return height(root);

}

int IntBinaryTree::height(TreeNode* root) const {

	if (!root) {

		return 0;

	}

	else {

		int left = height(root->left);

		int right = height(root->right);

		return max(left, right) + 1;

	}

}

int IntBinaryTree::widthTree() const {

	return widthTree(root);

}

int IntBinaryTree::widthTree(TreeNode* root) const {

	if (root == NULL) {

		return 0; // check condition root is NULL then return 0

	}

	else {

		int maxWidth = 0;

		int width;

		int h = height(root);

		int i;

		for (i = 1; i <= h; i++) {

			width = getWidth(root, i);

			if (width > maxWidth) {

				maxWidth = width;

			}

		}

		return maxWidth;

	}

}

int IntBinaryTree::getWidth(TreeNode* root, int level) const {

	if (root == NULL)

		return 0;

	if (level == 1)

		return 1;

	else if (level > 1) {

		return getWidth(root->left, level - 1) + getWidth(root->right, level - 1);

	}

}