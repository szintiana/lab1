#include "lab1.h"
#include "assert.h"
#include <vector>

void prim_array_test()
{
    std::vector<int> liste = lab1::prim_array(3);

    std::vector<int> expected = { 2, 3, 5 };

    assert(expected == liste);
}

void relativ_prim_array_test()
{
    std::vector<int> relativ_prim_liste{ 6, 3, 4, 5, 7, 11 };
    std::vector<int> liste = lab1::relativ_prim_array(relativ_prim_liste);

    std::vector<int> expected = { 3, 4, 5, 7, 11 };

    assert(expected == liste);
}

void twin_array_test()
{
    std::vector<int> liste = lab1::twin_array(5);

    std::vector<int> expected = { 3, 5, 5, 7, 11, 13, 17, 19, 29, 31 };

    assert(expected == liste);
}

void laengste_untervektor_test()
{
    std::vector<int> teilfolge{ 1, 2, 3, 5, 4, 3, 2, 1, 2, 3, 4, 5, 6, 1 };
    std::vector<int> liste = lab1::laengste_untervektor(teilfolge);

    std::vector<int> expected = { 5, 4, 3, 2, 1 };

    assert(expected == liste);
}

int main()
{
    prim_array_test();
    relativ_prim_array_test();
    twin_array_test();
    laengste_untervektor_test();

    return 0;
}