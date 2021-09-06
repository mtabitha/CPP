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

Fixed::Fixed(const int copy)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(copy << nbFractBit);
}

Fixed::Fixed(const float copy)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(copy * (1 << nbFractBit)));
}

Fixed& Fixed::operator = (const Fixed& copy)
{
    std::cout << "Assugnation operator called" << std::endl;
    this->setRawBits(copy.getRawBits());
    return (*this);
}

int     Fixed::getRawBits(void) const
{
    return (buf);
}

void    Fixed::setRawBits(int const raw)
{
    buf = raw;
}

float   Fixed::toFloat(void) const
{
	return (float(this->getRawBits()) / (1 << nbFractBit));
}

int     Fixed::toInt(void) const
{
	return (this->getRawBits() >> nbFractBit);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

std::ostream& operator << (std::ostream& cout, const Fixed& f)
{
	return (cout << f.toFloat());
}