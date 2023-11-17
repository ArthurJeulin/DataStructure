#include "Algorithms.h"

int main(){



/*------------------------------------------*/
    std::vector<int> monTab {3,4,5,1,2};
    for(auto element : monTab){
        std::cout << element;
    }
    std::cout << "\n";

    int algo = 2;

    switch (algo)
    {
    case 0:
        Sort(monTab,0);
        break;
    case 1:
        SelectionSort(monTab);
        break;  
    case 2:
        BubbleSort(monTab);
        break;
    case 3:
        EnhancedBubbleSort(monTab);
        break;
    }

    for(auto element : monTab){
        std::cout << element;
    }
    std::cout << std::endl;

    return 0;
}