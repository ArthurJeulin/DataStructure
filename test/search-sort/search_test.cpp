#include "algorithms.h"

int main(){


/*-----------------TestSwapMethod----------------*/
    int a = 1;
    int b = 2;
    std::cout << "a :"<<a<< " b :"<<b<<"\n";
    swap<int>(a,b);
    std::cout << "a :"<<a<< " b :"<<b<<"\n";
    swap<int>(&a,&b);
    std::cout << "a :"<<a<< " b :"<<b<<"\n";
/*------------------------------------------*/
    std::vector<int> monTab {4,5,6,1,3,9,4,8,2,7};
    //Sort(monTab,0);
    SelectionSort(monTab);
    for(auto element : monTab){
        std::cout << element<< " ";
    }
    std::cout << std::endl;

/*------------------------------------------*/
    std::vector<int> data;
    for (size_t i = 0; i < 1000; ++i)
    {
        data.push_back(rand() % 101 );
    }
    for(auto element : data){
        std::cout << element<< " ";
    }
    std::cout << std::endl;
    std::cout <<"--------------------"<< std::endl;
    std::cout << std::endl;
    SelectionSort(data);

    
    // std::cout <<"--------------------"<< std::endl;
    // for(auto element : data){
    //     std::cout << element<< " ";
    // }
    // std::cout << std::endl;
    // std::vector<int> tab{5,3,1,4,2};
    // EnhancedBubbleSort(tab);

    // for(auto const element : tab)
    // {
    //     std::cout << element;
    // }
    // std::cout << std::endl;

    // std::vector<int> t{5,3,1,4,2};
    // int key = 9;
    // std::cout << "Search value :" << key << " in tab\n";
    // std::cout << "Linear Search result : "<< LinearSearch(t,key) << "\n";

    // key = 2;
    // std::cout << "Search value :" << key << " in tab\n";
    // std::cout << "Linear Search result : "<< LinearSearch(t,key) << "\n";

    // std::vector<int> vecteur = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // key = 4;
    // std::cout << "Search value :" << key << " in tab" << std::endl;
    // std::cout << "Binary Search result : "<< BinarySearch<int>(vecteur,key) << "\n";

    // std::vector<int> sousVecteur(vecteur.begin()+ key,vecteur.end());

    // // for(auto const element : sousVecteur)
    // // {
    // //     std::cout << element;
    // // }

    return 0;
}