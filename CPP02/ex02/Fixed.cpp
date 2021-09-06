#include "Fixed.hpp"

Fixed::Fixed()
{
    this->setRawBits(0);
}

Fixed::Fixed(const Fixed& copy)
{
    *this = copy;
}

Fixed::Fixed(const int copy)
{
	this->setRawBits(copy << nbFractBit);
}

Fixed::Fixed(const float copy)
{
	this->setRawBits(roundf(copy * (1 << nbFractBit)));
}

Fixed& Fixed::operator = (const Fixed& copy)
{
    this->setRawBits(copy.getRawBits());
    return (*this);
}

bool    Fixed::operator > (const Fixed& f) const
{
    return (this->getRawBits() > f.getRawBits());
}

bool    Fixed::operator >= (const Fixed& f) const
{
    return (this->getRawBits() >= f.getRawBits());
}

bool    Fixed::operator < (const Fixed& f) const
{
    return (this->getRawBits() < f.getRawBits());
}

bool    Fixed::operator <= (const Fixed& f) const
{
    return (this->getRawBits() <= f.getRawBits());
}

bool    Fixed::operator == (const Fixed& f) const
{
    return (this->getRawBits() == f.getRawBits());
}

bool    Fixed::operator != (const Fixed& f) const
{
    return (this->getRawBits() != f.getRawBits());
}

Fixed	Fixed::operator + (const Fixed& f) const
{
    return (this->toFloat() + f.toFloat());
}

Fixed	Fixed::operator - (const Fixed& f) const
{
    return (this->toFloat() - f.toFloat());
}

Fixed	Fixed::operator * (const Fixed& f) const
{
    return (this->toFloat() * f.toFloat());
}

Fixed	Fixed::operator / (const Fixed& f) const
{
    return (this->toFloat() / f.toFloat());
}

Fixed&	Fixed::operator ++ (void)
{
    ++buf;
    return (*this);
}

Fixed&	Fixed::operator -- (void)
{
    --buf;
    return (*this);
}

Fixed	Fixed::operator ++ (int)
{
    Fixed tmp;

    tmp = *this;
    ++buf;
    return (tmp);
}

Fixed	Fixed::operator -- (int)
{
    Fixed tmp;

    tmp = *this;
    --buf;
    return (tmp);
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

Fixed& Fixed::max(Fixed& f1, Fixed& f2)
{
	return (max(f1, f2));
}

Fixed& Fixed::min(Fixed& f1, Fixed& f2)
{
	return (min(f1, f2));
}

const Fixed& Fixed::max(const Fixed& f1, const Fixed& f2)
{
	return (f1 > f2 ? f1 : f2);
}

const Fixed& Fixed::min(const Fixed& f1, const Fixed& f2)
{
	return (f1 < f2 ? f1 : f2);
}


Fixed::~Fixed()
{}

std::ostream& operator << (std::ostream& cout, const Fixed& f)
{
	return (cout << f.toFloat());
}