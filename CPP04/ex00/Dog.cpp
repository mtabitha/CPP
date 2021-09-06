#include "Dog.hpp"

Dog::Dog()
{
    setType("Dog");
}

Dog::Dog(const Dog& copy)
{
    *this = copy;
}

Dog& Dog::operator = (const Dog& copy)
{
    if (this != &copy)
        setType(copy.getType());
    return (*this);
}

void            Dog::makeSound(void) const
{
    std::cout << "Dog: AUF AUF AUF" << std::endl;  
}
