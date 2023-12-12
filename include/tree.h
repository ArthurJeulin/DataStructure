// **********************************************************
//      2023 : Arthur JEULIN
//      DataStructure : Learn Tree
//      Created by Arthur JEULIN on 01/15/2023.
// **********************************************************

#ifndef TREE_H
#define TREE_H

#include <iostream>

class Node{
	public:
		Node* leftChild;
		Node* rightChild;
		int data;
		// Initialize left and right child to 0
		Node(int data);
		// Display the data of the current node
		void Display();
};

class Tree{
	public :
	// attribut that reference to the root of the tree
	//Pointe //link to the Node/root above him
		Node* root;
		// Constructeur
		Tree();
		Node* Find(int key);
		void DisplayInOrder(Node *localRoot);
	/*
	Inserting a Node
		- The first node to be inserted into the tree will 
		  become the root node.
		- The second insertion will compare its key value 
		   with that of root. 
			If greater then it becomes the roots right child 
			If less the left child.
		- Subsequent insertions compare their key values with the 
		  root and then its left or right child depending upon it beging
		  less than or greater than the root’s key value.
		- The process continues down the tree until an appropriate left or 
		   right child with a null value is fonund. 
			At this point the new node is assigned to the child.
	*/
		void Insert(int key);

};

#endif /* TREE_H */