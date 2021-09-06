#include "easyfind.hpp"

template< typename T>
void    PrintContainer(const T& Container)
{
    for (typename T::const_iterator it = Container.begin();
            it != Container.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl << "------------------------------------" << std::endl;
}

template<typename T>
void    test(T& Container, const int& nbr)
{
    try
    {
        easyfind(Container, nbr);
        std::cerr << "Element " << nbr <<" found" << std::endl;
    }
    catch (std::exception& ex)
    { std::cerr << "Element " << nbr << " " << ex.what() << std::endl; }
}

void    testVector(void)
{

    std::cout << "<<<<<<<<<< TEST VECTOR >>>>>>>>>" << std::endl;
    std::vector<int> vec;

    for (int i = 0; i < 10; ++i)
        vec.push_back(i);
    PrintContainer(vec);

    test(vec, 3);
    test(vec, 6);
    test(vec, -8);
    test(vec, 1);

    std::cout << std::endl;
}

void    testSet(void)
{

    std::cout << "<<<<<<<<<< TEST SET >>>>>>>>>" << std::endl;
    std::set<int> Set;

    for (int i = 0; i < 10; ++i)
        Set.insert(i);
    PrintContainer(Set);

    test(Set, 3);
    test(Set, 6);
    test(Set, -8);
    test(Set, 1);

    std::cout << std::endl;
}

void    testList(void)
{

    std::cout << "<<<<<<<<<< TEST LIST >>>>>>>>>" << std::endl;
    std::list<int> List;

    for (int i = 0; i < 10; ++i)
        List.push_front(i);
    PrintContainer(List);

    test(List, 3);
    test(List, 6);
    test(List, -8);
    test(List, 1);

    std::cout << std::endl;
}

void    testArray(void)
{

    std::cout << "<<<<<<<<<< TEST ARRAY >>>>>>>>>" << std::endl;
    std::array<int, 10> arr;

    for (int i = 0; i < 10; ++i)
        arr[i] = i;
    PrintContainer(arr);

    test(arr, 3);
    test(arr, 6);
    test(arr, -8);
    test(arr, 1);

    std::cout << std::endl;
}

int main(void)
{
    testVector();
    testSet();
    testList();
    testArray();

    return (0);
}