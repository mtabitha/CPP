#include "Animal.hpp"

Animal::Animal()
{}

Animal::Animal(const Animal& copy)
{
    *this = copy;
}

Animal& Animal::operator = (const Animal& copy)
{
    if (this != &copy)
        setType(copy.getType());
    return (*this);
}

std::string    Animal::getType(void) const
{
    return (type);
}

void            Animal::makeSound(void) const
{
    std::cout << "Animal: No sound" << std::endl;  
}

void            Animal::setType(std::string type)
{
    this->type = type;
}
