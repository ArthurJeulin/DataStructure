// **********************************************************
//      2023 : Arthur JEULIN
//      DataStructure : Learn Tree
//      Created by Arthur JEULIN on 01/15/2023.
// **********************************************************

#include "tree.hpp"

Node::Node(int data){
    this->data = data;
    leftChild = 0 ;
    rightChild = 0;
}

void Node::Display(){
    std::cout<< this->data << std::endl;
}


Tree::Tree(){
    root = 0;
}
Node* Tree::Find(int key){
    Node* current = root;

    while(current->data != key){
    //Compare the value of key with the current data of the node
        if (key< current->data)
        {
            current = current->leftChild;
        }
        else{
            current = current->rightChild;
        }
    if (current == 0)
    {
        return 0;
    }
    return current;
        
    }
}
void Tree::DisplayInOrder(Node *localRoot){
    if (localRoot!=0)  
    {
        DisplayInOrder(localRoot->leftChild);
        localRoot->Display();
        DisplayInOrder(localRoot->rightChild);
    }
    
}
//Iterative solution
void Tree::Insert(int data){
     Node* newNode = new Node(data);
     if (root==0)
     {
        root = newNode;
     }
     else{
        Node* current;
        //On se place à la racine
        //Root is the first node with some data
        current = root;
        Node* parent;
        while (true)
        {
            //the root become the parent
            //we are changing of level
            parent = current;
            if (data< parent->data)
            {
                //Change of position
                //if data inferior to the data of the current node
                // we move to the left child
                current =current->leftChild;
                //if the current node doesn't have a left child
                //the newNode becomes the left child
                if (current == 0)
                {
                    parent->leftChild = newNode;
                    return;
                }
                
            }
            else{
                //Change of position
                //If data is superior to the data of the current node
                //we move to the left child
                current = current->rightChild;
                //if the current node doesn't have a rightChild
                //the newNode become the right child
                if (current == 0)
                {
                    parent->rightChild = newNode;
                    return;
                }
                
            }
            
        }
        
     }

}
