#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public:
    Fixed();
    Fixed(const Fixed& copy);
    Fixed(const int copy);
    Fixed(const float copy);
    Fixed& operator = (const Fixed& copy);
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;
    ~Fixed();
private:
    static const int    nbFractBit = 8;
    int                 buf;
};

std::ostream& operator << (std::ostream& cout, const Fixed& f);

#endif