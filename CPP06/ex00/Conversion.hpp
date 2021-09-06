#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <limits>
# include <cmath>
# include <iomanip>

class Conversion
{
private:
    const std::string   str;
    long double         value;
public:

    Conversion(const std::string& str);
    Conversion(const Conversion& copy);
    long double     getValue(void) const;
    static int      getPrecision(const std::string& str);
    std::string     getStr(void) const;
    virtual char    getChar(void) const;
    virtual int     getInt(void) const;
    virtual float   getFloat(void) const;
    virtual double  getDouble(void) const;
    bool            isChar(const std::string& str);
    virtual         ~Conversion() {}

    class BadTypeException : public std::exception
    {};

    class NonDisplayableException : public std::exception
    {
        const char * what() const throw();
    };

    class ImpossibleException : public std::exception
    {
        const char * what() const throw();
    };

    class InfException : public std::exception
    {
        std::string excep_str;
        const char * what() const throw();
    public:
        InfException(std::string);
        virtual ~InfException() throw();
    };
};

std::ostream& operator << (std::ostream& cout, const Conversion& type);

#endif 