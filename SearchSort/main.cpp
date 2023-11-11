#include <iostream>
#include <vector>
/*
    Big O Notation : which is a notation used for measuring the time taken tor un algorithms
    Asymptotic Complexity :  (Time complexity or space complexity)
        . The runt-time of each algorithm will depend on several factors : 
            - The number and tupe of operations performed by the algorithm
            - The number oe elements or nodes in a data structure
            - How the elements or nodes are arraged (sorted or unsorted)
            - Also depend upon other factor such as computer archiecture and processor speed 
    ------------------------------
    Fast Bit O runtime calculations : 
     . O(1) is 'constant time'
        - Operations (such as Insert or Delete in some data structures) take the same time regardless of how many elements or nodes there are (n)
        - There is no difference in the time taken to insert a value into an array of five elements comapred with inserting to inserting a value 
        in an array of a million elements.
     . O(n) is 'linear time'
        - exemple a for loop that iterates through every element of an an array.
        - This means the time taken to perform an operation will depend on how many items are within a data structure
        - An exemple of this would ve iterating for a data structure. If it takes five milliseconds to access each elements of an array the
        it would take 25 seconds to go though an array of five elements.
        - The runtime of the algorithm is directly proportional to n
        - One loop that prints each element of the data structure would take O(n)
     . O(logn) is 'logarithmic time'
        - 
        - Runtime only increases fractionally as n incrases
        - log2(8) = 3 (inverse of the power; 2^3 = 8)
        - log2(8000) = 12.96
     . O(nlogn) is 'linearthmic time'
        - runtime is O(logn)*n
        - Divide and conquer algorithms work on this principle
    ----------------------------------------------------------
    Slow Big O runtime calculations 
    . O(n^2) is 'quadratic time'
        - Runtime will geometrically incrase as n increases : 
        - 5^2 = 25;
        - 10^2 = 100
        - Nested loops usually take O(n^2) if the data structure is iterated through for every element of the data structure
        - Nested loop : a loop inside a loop is going to be o of n time o of n. If each loop is linear time then mutiplying them together 
        give you o of n^2
    . O(n!) is 'factorial time'
        - Runtim will exponentially increase as n Incrases (but by larger intervals)
        - 5! = 120
        - 10! = 3,628,800
        - Brute force algorithms that try all combinations ... very slow...
    ----------------------------------------------------------
    Best, wort and average cases
    . Best case 
        - If we're searching for element that happends to be near the startd of the data structure of the element eare nearly sorted ;
        The algorithm will complete quickly
    . Worst case 
        - if we're searching for an element happends to be eanr the end of the data structure of the data structure is completely unsorted,
        the algorithm will take longer
    . Average cases 
        - If the element resides around the middle of the array.

Topics : 
    . Swap function
    . Sort Algoirthms
    . Search Algorithms

Swap : 
    . used by a number of sort algorithms to swap two values
    . in the exemples and exercises it is used to swap integer values
    . The function has no return type
    .Parameters are passed by reference or address
Sort Algorithms :
    . An algorithm that order data
    In our examples we will be ordering arrays of integers values.
    Sorted data is easier to search
    Especialy array data shich dan be randomly accesses as opposed to a Linked list which is sequentially searched.
    The eficiency of the algorithm can be measured using the Big O notation.

    Selection Sort :
    . Repeatedly locate the smallest unprocessd element in the array  and position itin its corrects index location.
    . Efficiency average and worst O(N^2).
    Ex : Sort an array {5,1,3,4,2} using Selection Sort.
    Locate the smallest element 1 and swap it with the first element {1,5,3,4,2}
    Locate the smallest element from the sub set, starting from after the last sorted element.
    {5,3,4,2} and swap with the first -gives {2,3,4,5}
    Giving {1,2,3,4,5}

    Bublle Sort
    Make repeated passes through a list of items,
    echanging adgacent items if necessary.
    At each pass, the largest unsroted item will be pushed in tis proper place.
    Efficiency Average and worst O(n^2)
    Bubble Sort Explanation :
    Compared pairs of adjacent elements of the sequence, if they are in the xrong order swap them and do 
    this till there are no more swapping's to do.
    ex : Sort an array {5,3,1,4,2} using Bubble Sort.
        Compare first two, as 5>3, they are swapped
        . {3,5,1,4,2} Again compared next two, as 5>1, they are swapped
        . {3,1,5,4,2} Keep swapping
        . Until the first pass is complete {3,1,4,2,5}
        . Second Pass : compare 3 & 1, as 3>1 they are swapped
        . {1,3,4,2,5} compared 3,4 they are in correct order
        . Compared 4 & 2 and swap compared 4 & 5 no swap
        . So far we have {1,3,2,4,5}
        . Final Pass : Compared 1 & 3 no swap. Compared 3&2 and swap
    
    Search Algorithms
     . Key is the value being searched for
     . Some algorithms assume the data is sorted
     . The search function returns the index of the key within the array if found
     . Returns -1 if the key is not found.

    Linear Search (Sequantial Search)
     . Each element is checked in sequence until a match is found.
     . Efficiency O(n).
     . Only suitable for small data sets. 

    Binary Search
     . Searches sorted data only
     . The key is compared to the middle value if no matchec and the key is less than the value the action is
     repeated on the left portion of the array ortherwise the right.
     . Efficiency O(log(n))
     . Suiteable for large data sets


*/

template<typename T>
void swap(T& a, T& b)
{
    T temp = b;
    b = a;
    a = temp;
}

template<typename T>
void swap(T* a, T* b)
{
    T temp = *b;
    *b = *a;
    *a = temp;
}

template<typename T>
void Sort(std::vector<T>& tableau, size_t element)
{
    if(tableau.size() > element){
        for (size_t i = element; i < tableau.size();++i)
        {
            if(tableau[i]< tableau[element])
            {
                T temp = tableau[i];
                tableau[i] = tableau[element];
                tableau[element] = temp;
            }
        }
        Sort(tableau, element+1);
    } 
}

template<typename T>
void SelectionSort(std::vector<T>& tableau)
{
    for(size_t n = 0; n< tableau.size() ; ++n)
    {
        size_t smallest = n;
        for (size_t i = n+1; i < tableau.size(); ++i)
        {
            if(tableau[i]< tableau[smallest])
            {
                smallest = i;
            }
        }
        swap(tableau[n],tableau[smallest]);
        // T temp = tableau[smallest];
        // tableau[smallest] = tableau[n];
        // tableau[n] = temp;        
    }
}


template<typename T>
void BubbleSort(std::vector<T>& monTab)
{

    for (size_t j = 0; j < monTab.size(); ++j)
    {
        //Ici on check si la variable à droite est plus grande
        //Si la variable à droit est plus grande on swap
        for (size_t i = 0; i < monTab.size()-1; ++i)
        {
            if(monTab[i]>monTab[i+1])
            {
                swap(monTab[i],monTab[i+1]);
            }
        }
    }
}

template<typename T>
void EnhancedBubbleSort(std::vector<T>& monTab)
{
    bool sorted = false;
    size_t lastUnsorted = monTab.size()-1;
    while (!sorted)
    {   
        sorted = true;
        //Ici on check si la variable à droite est plus grande
        //Si la variable à droit est plus grande on swap
        for (size_t i = 0; i < lastUnsorted; ++i)
        {
            //On décale vers la droite la valeur la plus grande
            if(monTab[i]>monTab[i+1])
            {
                swap(monTab[i],monTab[i+1]);
                sorted = false;
            }
        }
        --lastUnsorted;
    }
}

//Return the index of the key value if found, whereas -1;
template<typename T>
T LinearSearch(const std::vector<T>& tab, const T key)
{
    for (size_t i = 0; i < tab.size(); ++i)
    {
        if(tab[i]==key)
        {
            return i;
        }
    }
    return -1;
}

template<typename T>
int BinarySearch(const std::vector<T> tab, const T key)
{
    size_t middle;
    if(tab.size()%2==0)
    {
        middle = tab.size()/2 ;
    }
    else
    {
        middle = tab.size()/2 + 0.5;
    }
   // std::cout << " Middle value : " << middle << " tab value : "<<tab[middle]<< std::endl;
    
    if(key == tab[middle]){
        return middle;
    }
    if(key < tab[middle] )
    {
        // repeat the same on the left portion
        std::vector<int> sousVecteur(tab.begin(),tab.begin()+middle);
        return BinarySearch<T>(sousVecteur,key);
    }
    if(key > tab[middle] )
    {
        // repeat the same on the right portion
        std::vector<int> sousVecteur(tab.begin() + middle,tab.end());
        return middle + BinarySearch<T>(sousVecteur,key);
    }
    return -1;
}
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
    std::cout <<"--------------------"<< std::endl;
    for(auto element : data){
        std::cout << element<< " ";
    }
    std::cout << std::endl;
    std::vector<int> tab{5,3,1,4,2};
    EnhancedBubbleSort(tab);

    for(auto const element : tab)
    {
        std::cout << element;
    }
    std::cout << std::endl;

    std::vector<int> t{5,3,1,4,2};
    int key = 9;
    std::cout << "Search value :" << key << " in tab\n";
    std::cout << "Linear Search result : "<< LinearSearch(t,key) << "\n";

    key = 2;
    std::cout << "Search value :" << key << " in tab\n";
    std::cout << "Linear Search result : "<< LinearSearch(t,key) << "\n";

    std::vector<int> vecteur = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    key = 4;
    std::cout << "Search value :" << key << " in tab" << std::endl;
    std::cout << "Binary Search result : "<< BinarySearch<int>(vecteur,key) << "\n";

    std::vector<int> sousVecteur(vecteur.begin()+ key,vecteur.end());

    // for(auto const element : sousVecteur)
    // {
    //     std::cout << element;
    // }

    return 0;
}