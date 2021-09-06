#include "Animal.hpp"

Animal::Animal()
{ 
//std::cout << "Animal created" << std::endl;
}

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

void            Animal::setType(std::string type)
{
    this->type = type;
}

Animal::~Animal()
{
    //std::cout << "Animal deleted" << std::endl;
}