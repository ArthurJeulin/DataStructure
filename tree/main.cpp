// **********************************************************
//      2023 : Arthur JEULIN
//      DataStructure : Learn Tree
//      Created by Arthur JEULIN on 01/15/2023.
// **********************************************************
/*
Implementation of a Binary Search Tree in C++
    Basic Design:
        A Class Binary Tree :
            -root : *Node
            -Find(id : int) : Data
            -Insert(newData : Data) : void
            -Delete(id : int) void
        A Class Node :
            - lelfChild : Node
            - rightChild : Node
            - data : Data
        
        A Class Data :
            -id : int
            -data : String
*/

#include <iostream>
#include "tree.hpp"
#include <random>

int main(){
    //number of element in the tree :
    int n = 15;
    int i = 0;
    //initialize the tree
    Tree arbre;
    while(i!=n){
        std::random_device rd; // sedd for the random number engine
        std::mt19937 gen(rd()); // standad mersenne_twister_engine seeded with rd()

        std::uniform_int_distribution<> dis(1,100);
        int random_num = dis(gen);
        arbre.Insert(random_num);
        i++;
    }
    arbre.DisplayInOrder(arbre.root);

    return 0;
}