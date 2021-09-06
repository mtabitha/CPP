#include <vector>
#include <set>
#include <list>
#include <array>
#include <iostream>

class NotFoundException : public std::exception
{
public:
    const char * what() const throw()
    {
        return ("Not Found");
    }
};

template<typename T>
typename T::iterator    easyfind(T& Container, const int& nbr)
{
    typename T::iterator it;

    for(it = Container.begin(); it != Container.end(); ++it)
        if (*it == nbr)
            return (it);
    throw NotFoundException();
}