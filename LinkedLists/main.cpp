#include <iostream>

/*
    Linked Lists : 
    . Unlike arrays whose elments can be accessed directly using an index, the items in the linked list must be sequentially accessed.
    . Each nodes as 
                - a Data stored 
                - a Reference to next Link in List ( a ptr to the next Link node).
    . End of the list where the last node contains a null pointer. 

    Insertion and Deletion :
    . Insertion and deletion are achieved by changing the links
    . The data is not moved within the structure.
    . Structure may be maintained in order
    Dans un array lorsque l'on veut ajouter un élément aux debut on doit déplace tous les éléments d'une position.
    Dans un linklist, pour ajouter un élément au debut il suffit d'ajouter nouveau header qui point vers l'ancien hearder.
    Pareil avec deletion.
    Change the new Link to point to the first link in the Linked List.

    prepending : means we are going to inserting nodes at the start of the list.
    The advantage of preprending is that operation can be done in constant time O(1).
    The time needed to add an element at the beginning of the list isn't affected by the size of the list.
    apending : inserting element at the end of the list will take linear time O(n).
    the time to get to the end of the list will depends on how many items there are in the list.

    The item we want to add to the start of the list we have to make the next pointer poin towards the old start/head of the list

    Delete operation : 
    Implemente the find algorithms : will iterate through the list looking at each node comparing the value we are
    looking for in this case it's just an integer. With the data of each node.
    We have to keep a pointer to the previous node and maintain the current pointer (of the node we want to delete).
    We have to change the previous node (that is currently pointing towards the node we want to delete), has to point toward the point next
    int the list( the node after the one we want to delete)


*/

template<typename T>
class LinkNode //Correspond à un Node 
{
public:
    LinkNode(): _data(0), _next(nullptr)
    {

    }
    LinkNode(T data) : _data(data), _next(nullptr)
    {
    }

    void Display()const noexcept
    {
        std::cout << "Data : "<< _data << std::endl;
    }

    T data()const noexcept
    {
        return _data;
    }
    //On donne l'adresse de l'ancien premier node de la list
    //Ce nouveau node doit pointer sur l'ancier premier node
    void next(LinkNode* previousHead)noexcept
    {
        _next = previousHead;
    }
    LinkNode* next()noexcept
    {
        return _next;
    }
private:
    T _data;
    LinkNode* _next; // access to the next  node from the list
};

template<typename T>
class LinkedList // Lie les noeuds en eux pour crée la liste
{
    public :
    LinkedList(): _head(new LinkNode<T>(0))
    {}

    bool IsEmpty()
    {
        return (_head==nullptr);
    }

    void Insert(LinkNode<T>* new_node) // On ajoute un Node dans la linklist
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
    T Find(int key)
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
    void Display()noexcept
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
    bool Delete(int key)
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
    void Delete()
    {

    }
    private:
    //Premier Node auxquel on peut acceder dans la linkedlist
    LinkNode<T>* _head = nullptr; 
   
    
};

int main(){
    LinkedList<int> malist;
    //malist.Display();
    for (size_t i = 0; i < 6; ++i)
    {
        malist.Insert(new LinkNode<int>(i+1));
    }
    
    malist.Display();

    std::cout << "Let look for the value: " << 5 << std::endl;
    if(malist.Find(5)!=-1)
    {
        std::cout << "We found 5\n";
    }
    else
    {
        std::cout << "Value not found\n";
    }
    std::cout << "Let look for the value: " << 78 << std::endl;
    if(malist.Find(78)!=-1)
    {
        std::cout << "We found 78\n";
    }
    else
    {
        std::cout << "Value not found\n";
    }

    std::cout<<"Let delete value :" << 5 << std::endl;
    if(malist.Delete(5)==true)
    {
        std::cout<<"The value 5 has been found and deleted\n";
    }
    else
    {
        std::cout<<"Value not found\n";
    }
    if(malist.Delete(78)==true)
    {
        std::cout<<"The value 78 has been found and deleted\n";
    }
    else
    {
        std::cout<<"Value not found\n";
    }
    malist.Display();
    return 0;
}