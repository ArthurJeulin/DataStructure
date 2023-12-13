#include <iostream>
#ifndef LINKED_LISTS_H
#define LINKED_LISTS_H

/*
    Linked Lists : 
    . Unlike arrays whose elments can be accessed directly using an index,
      the items in the linked list must be sequentially accessed.
    . Each nodes as 
                - a Data stored 
                - a Reference to next Link in List ( a ptr to the next Link node).
    . End of the list where the last node contains a null pointer. 

    Insertion and Deletion :
    . Insertion and deletion are achieved by changing the links
    . The data is not moved within the structure.
    . Structure may be maintained in order
    Dans un array lorsque l'on veut ajouter un élément aux debut on doit déplace tous
    les éléments d'une position.
    Dans un linklist, pour ajouter un élément au debut il suffit d'ajouter nouveau header
    qui point vers l'ancien hearder.
    Pareil avec deletion.
    Change the new Link to point to the first link in the Linked List.

    prepending : means we are going to inserting nodes at the start of the list.
    The advantage of preprending is that operation can be done in constant time O(1).
    The time needed to add an element at the beginning of the list isn't affected by the size 
    of the list. apending : inserting element at the end of the list will take linear time O(n).
    the time to get to the end of the list will depends on how many items there are in the list.

    The item we want to add to the start of the list we have to make the next pointer poin towards
    the old start/head of the list

    Delete operation : 
    Implemente the find algorithms : will iterate through the list looking at each node comparing 
    the value we are looking for in this case it's just an integer. With the data of each node.
    We have to keep a pointer to the previous node and maintain the current pointer (of the node we want to delete).
    We have to change the previous node (that is currently pointing towards the node we want to delete), has to point toward the point next
    int the list( the node after the one we want to delete)


*/

template<typename T>
class LinkNode //Correspond à un Node 
{
  public:
    void Display() const noexcept;
    T data() const noexcept;
    void next(LinkNode<T>* previousHead) noexcept;
    LinkNode<T>* next() noexcept;

    LinkNode();
    LinkNode(T data);
  private: 
    T _data;
    LinkNode<T>* _next; // access to the next  node from the list
};

template<typename T>
class LinkedList // Lie les noeuds en eux pour crée la liste
{
  public:
    bool IsEmpty();
    // On ajoute un Node dans la linklist
    void Insert(LinkNode<T>* new_node);
    T Find(int key);
    void Display() noexcept;
    bool Delete(int key);
    void Delete();
    LinkedList();
  private:
    //Premier Node auxquel on peut acceder dans la linkedlist
    LinkNode<T>* _head = nullptr; 
   
};

#endif /*LINKED_LISTS_H*/
