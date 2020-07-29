/*** binaryTree.h***/

#ifndef INTBINARYTREE_H

#define INTBINARYTREE_H

class IntBinaryTree

{

private:

	struct TreeNode

	{

		int data;

		TreeNode* left;

		TreeNode* right;

	};

	TreeNode* root;

	//private member functions

	void insert(TreeNode*&, TreeNode*&);

	void displayInOrder(TreeNode*) const;

	void displayPreOrder(TreeNode*) const;

	void displayPostOrder(TreeNode*) const;

	void destroySubTree(TreeNode*);

	int leafCount(TreeNode*) const;

	int height(TreeNode*) const;

	int widthTree(TreeNode*) const;

public:

	// Constructor

	IntBinaryTree() {

		root = nullptr;

	}

	// Destructor

	~IntBinaryTree();

	void insertNode(int);

	void displayInOrder() const {

		displayInOrder(root);

	};

	void displayPreOrder() const {

		displayPreOrder(root);

	}

	void displayPostOrder() const {

		displayPostOrder(root);

	}

	int leafCount() const;

	int height() const;

	int widthTree() const;

	int getWidth(TreeNode*, int) const;

};

#endif