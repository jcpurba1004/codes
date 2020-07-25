// chap21-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program builds a binary tree with 5 nodes.
// The deleteNode function is used to remove two of them.
#include <iostream>
#include "IntBinarytree.h"
using namespace std;

int main()
{
    IntBinaryTree tree;

    // Insert some values into the tree.
    cout << "Inserting nodes.\n";
    tree.insertNode(5);
    tree.insertNode(8);
    tree.insertNode(3);
    tree.insertNode(12);
    tree.insertNode(9);

    // Display the values.
    cout << "Here are the values in the tree:\n";
    tree.displayInOrder();

    // Delete the value 8.
    cout << "Deleting 8...\n";
    tree.remove(8);

    // Delete the value 12.
    cout << "Deleting 12...\n";
    tree.remove(12);

    // Display the values.
    cout << "Now, here are the nodes:\n";
    tree.displayInOrder();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file