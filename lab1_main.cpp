#include <vector>
#include <iostream>
#include "lab1.h"

int main()
{
    // Uebung 2a
    std::cout << "Uebung 2a) " << std::endl;
    std::vector<int> liste = lab1::prim_array(3);
    for (int i : liste) {
        if (i != 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    //Uebung 2b
    std::vector<int> relativ_prim_liste{ 6, 3, 4, 5, 7, 11 };
    std::cout << "Uebung 2b) " << std::endl;
    std::vector<int> neu = lab1::relativ_prim_array(relativ_prim_liste);
    for (int i : neu) {
        if (i != 0) {
            std::cout << i << " ";
        }
    }

    //Uebung 11a
    std::cout << std::endl << "Uebung 11a) " << std::endl;
    std::vector<int> twin = lab1::twin_array(5);
    for (int i : twin)
    {
        std::cout << i << " ";
    }

    //Uebung 11b
    std::cout << std::endl << "Uebung 11b) " << std::endl;
    std::vector<int> teilfolge{ 1, 2, 3, 5, 4, 3, 2, 1, 2, 3, 4, 5, 6, 1 };
    std::vector<int> neu_neu = lab1::laengste_untervektor(teilfolge);
    for (int i : neu_neu)
    {
        std::cout << i << " ";
    }
    return 0;
}