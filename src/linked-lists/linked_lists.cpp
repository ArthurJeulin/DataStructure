#include "linked_lists.h"

template<typename T>
LinkNode<T>::LinkNode(T data) : _data(data), _next(nullptr)
{
}

template<typename T>
LinkNode<T>::LinkNode(): _data(0), _next(nullptr)
{

}
template<typename T>
void LinkNode<T>::Display()const noexcept
{
    std::cout << "Data : "<< _data << std::endl;
}
template<typename T>
T LinkNode<T>::data()const noexcept
{
    return _data;
}
//On donne l'adresse de l'ancien premier node de la list
//Ce nouveau node doit pointer sur l'ancier premier node

template<typename T>
void LinkNode<T>::next(LinkNode<T>* previousHead) noexcept
{
    _next = previousHead;
}

template<typename T>
LinkNode<T>* LinkNode<T>::next() noexcept
{
    return _next;
}


template<typename T>
LinkedList<T>::LinkedList(): _head(new LinkNode<T>(0))
{

}

template<typename T>
bool LinkedList<T>::IsEmpty()
{
    return (_head==nullptr);
}

template<typename T>
void LinkedList<T>::Insert(LinkNode<T>* new_node)
// On ajoute un Node dans la linklist
{
    if(_head!= nullptr)
    {
            //On donne au nouveau noeud l'adresse dans l'ancien head.
        new_node->next(_head);
        //On change la tête de liste avec l'adresse du nouveau node
        _head = new_node;
    }
    else
    {
        _head = new_node;
    }
}

template<typename T>
T LinkedList<T>::Find(int key)
{
    LinkNode<T>* current = _head;
    while (current->data()!=key)
    {
        //On retourne le pointeur du prochain noeud dans la liste.
        current = current->next();
        
        if(current->next()==nullptr)
        {
            return -1;
        }
    }
    return current->data();
}

template<typename T>
void LinkedList<T>::Display() noexcept
{
    LinkNode<T>* current = _head;
    while (current!=nullptr)
    {
        //Affiche la data dans le node actuel
        current->Display();
        //On retourne le pointeur du prochain noeud dans la liste.
        current = current->next();
    }    
}

template<typename T>
bool LinkedList<T>::Delete(int key)
{
    LinkNode<T>* current = _head;
    LinkNode<T>* previous = _head;
    while(current->data()!=key)
    {
        if(current->next()==nullptr)
        {
            return false;
        }
        else
        {
            previous = current;
            current = current->next();
        }
    }
    if(current==_head)
    {
        _head = current->next();
    }
    else
    {
        previous->next(current->next());
    }
    return true;
}

template<typename T>
void LinkedList<T>::Delete()
{

}

