#include "linked_lists.h"

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