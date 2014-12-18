// Specification file for the IntBinaryTree class
#ifndef INTBINARYTREE_H
#define INTBINARYTREE_H

#include "TreeNode.h"

class IntBinaryTree
{
public:
	// Constructor
	IntBinaryTree();

	// Destructor
	~IntBinaryTree();

	// Binary tree operations
	void insertNode(int num);
	bool searchNode(int num);
	void remove(int num);

	void displayInOrder() const;
	void displayPreOrder() const;
	void displayPostOrder() const;

private:
	TreeNode *root;       // Pointer to the root node

	// Private (helper) member functions
	void insert(TreeNode*& nodePtr, TreeNode*& newNode);
	void destroySubTree(TreeNode* nodePtr);
	void deleteNode(int num, TreeNode*& nodePtr);
	void makeDeletion(TreeNode* &nodePtr);
	void displayInOrder(TreeNode* nodePtr) const;
	void displayPreOrder(TreeNode* nodePtr) const;
	void displayPostOrder(TreeNode* nodePtr) const;
};

#endif