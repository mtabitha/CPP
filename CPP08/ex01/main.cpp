#include "span.hpp"
#include <iostream>

#define SIZE 5

template< typename T>
void    PrintContainer(const T& Container)
{
    for (typename T::const_iterator it = Container.begin();
            it != Container.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl << "------------------------------------" << std::endl;
}

void    test_FewNumbersException(Span &sp)
{
    sp.addNumber(5);
}

void    test_OutOfRangeException_1(Span& sp)
{
    srand(time(NULL));
    for (int i = 0; i < SIZE + 1; ++i)
        sp.addNumber(rand() % 100);
}

void    test_OutOfRangeException_2(Span& sp)
{
    std::vector<int>    vec;
    srand(time(NULL));
    for (int i = 0; i < SIZE + 1; ++i)
        vec.push_back(rand() % 100);
    sp.addNumber(vec.begin(), vec.end());
}   

void    test_GoodBehavior_1(Span& sp)
{
    std::vector<int>    vec;
    srand(time(NULL));
    for (int i = 0; i < SIZE; ++i)
        vec.push_back(rand() % 100);
    sp.addNumber(vec.begin(), vec.end());
}

void    test_GoodBehavior_2(Span& sp)
{
    srand(time(NULL));
    for (int i = 0; i < SIZE; ++i)
        sp.addNumber(rand() % 100);
}

int main(void)
{
    Span sp(SIZE);

    try
    {
        // test_FewNumbersException(sp);
        // test_OutOfRangeException_1(sp);
        // test_OutOfRangeException_2(sp);
        // test_GoodBehavior_1(sp);
        test_GoodBehavior_2(sp);
        
        PrintContainer(sp.getVector());
        std::cout << sp.shortestSpan() << std::endl;;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch( std::exception& ex)
    { 
        std::cerr << ex.what() << std::endl; 
    }
    
    return (0);
}