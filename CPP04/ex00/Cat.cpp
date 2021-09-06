#include "Cat.hpp"

Cat::Cat()
{
    setType("Cat");
}

Cat::Cat(const Cat& copy)
{
    *this = copy;
}

Cat& Cat::operator = (const Cat& copy)
{
    if (this != &copy)
        setType(copy.getType());
    return (*this);
}

void            Cat::makeSound(void) const
{
    std::cout << "Cat: MIEU MIEU MIEU" << std::endl;  
}
