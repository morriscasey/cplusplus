#ifndef TREENODE_H
#define TREENODE_H

class TreeNode
{
private:
	int value;         // The value in the node
	TreeNode *left;    // Pointer to left child node
	TreeNode *right;   // Pointer to right child node

	friend class IntBinaryTree; //IntBinaryTree sees everything as public
};

#endif