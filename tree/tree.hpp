// **********************************************************
//      2022 : Arthur JEULIN
//      DataStructure : Learn Tree
//      Created by Arthur JEULIN on 01/15/2023.
// **********************************************************

#ifndef tree_hpp
#define tree_hpp

#include <iostream>

class Node{
	public:
		Node* leftChild;
		Node* rightChild;
		int data;
		Node(int data){
				this->data = data;
				leftChild = 0;
				rightChild = 0;
        }
		void Display(){
			std::cout<< this->data<< std::endl;
		}
};

class Tree{
	public :
		Node* root;
		Tree(){
			root = 0;
		}
		Node* Find(int key){
				Node* current = root;
				while(current->data!=key){
					if(key<current->data){
						current = current->leftChild;
						}
					else{
						current = current->rightChild;
					}
				if(current ==0)
					return 0;
				}
				return current;
		}
		void DisplayInOrder(Node *localRoot){
				if(localRoot!=0){
					DisplayInOrder(localRoot->leftChild);
					localRoot->Display();
					DisplayInOrder(localRoot->rightChild);
				}
		}

};

#endif /* tree_hpp */