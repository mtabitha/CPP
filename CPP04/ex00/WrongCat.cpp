#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    setType("WrongCat");
}


WrongCat::WrongCat(const WrongCat& copy)
{
    *this = copy;
}

WrongCat& WrongCat::operator = (const WrongCat& copy)
{
    if (this != &copy)
        setType(copy.getType());
    return (*this);
}

void            WrongCat::makeSound(void) const
{
    std::cout << "WrongCat: MIEU MIEU MIEU" << std::endl;  
}
