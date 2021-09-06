#include "Point.hpp"

int main( void )
{
    Point A(1, 1);
    Point B(3, 6);
    Point C(5, 2);
    Point P(10 , 10);

    if (bsp(A, B, C, P))
        std::cout << "In triangle" << std::endl;
    else
        std::cout << "Out triangle" << std::endl;

    return 0;
}