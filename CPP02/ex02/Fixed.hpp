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

    Fixed&  operator = (const Fixed& copy);

    bool    operator > (const Fixed& f) const;
	bool    operator >= (const Fixed& f) const;
	bool    operator < (const Fixed& f) const;
	bool    operator <= (const Fixed& f) const;
	bool    operator == (const Fixed& f) const;
	bool    operator != (const Fixed& f) const;

	Fixed	operator + (const Fixed& f) const;
	Fixed	operator - (const Fixed& f) const;
	Fixed	operator * (const Fixed& f) const;
	Fixed	operator / (const Fixed& f) const;

	Fixed&	operator ++ (void);
	Fixed&	operator -- (void);
	Fixed	operator ++ (int);
	Fixed	operator -- (int);

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;

	static Fixed& max(Fixed& f1, Fixed& f2);
	static Fixed& min(Fixed& f1, Fixed& f2);
	static const Fixed& max(const Fixed& f1, const Fixed& f2);
	static const Fixed& min(const Fixed& f1, const Fixed& f2);

    ~Fixed();
private:
    static const int    nbFractBit = 8;
    int                 buf;
};

std::ostream& operator << (std::ostream& cout, const Fixed& f);

#endif