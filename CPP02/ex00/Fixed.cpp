#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->setRawBits(0);
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed& Fixed::operator = (const Fixed& copy)
{
    std::cout << "Assugnation operator called" << std::endl;
    this->setRawBits(copy.getRawBits());
    return (*this);
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (buf);
}

void    Fixed::setRawBits(int const raw)
{
    buf = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
