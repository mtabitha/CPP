#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{}


WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
    *this = copy;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal& copy)
{
    if (this != &copy)
        setType(copy.getType());
    return (*this);
}

std::string    WrongAnimal::getType(void) const
{
    return (type);
}

void            WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal: " << std::endl;  
}

void            WrongAnimal::setType(std::string type)
{
    this->type = type;
}
