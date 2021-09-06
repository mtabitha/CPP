#include <iostream>
#include "iter.hpp"

int main( void ) 
{
    int     arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    char    arr2[6] = {'a', 'b', 'c', 'd', 'f', 'g'};

    iter(arr1, 10, inc);
    iter(arr2, 6, inc);

    for (int i = 0; i < 10; ++i)
        std::cout << arr1[i] << " ";
    std::cout << std::endl;
    for (int i = 0; i < 6; ++i)
        std::cout << arr2[i] << " ";
    std::cout << std::endl;
    return 0;
}