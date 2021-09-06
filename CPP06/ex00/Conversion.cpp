#include "Conversion.hpp"

Conversion::Conversion(const std::string& str) : str(str)
{
    size_t pos;

    try
    {
        value = std::stold(str, &pos);
        if (std::isinf(value) || str[pos] == '\0' || (str[pos] == 'f' && str[pos + 1] == '\0'))
            ;
        else
            throw BadTypeException();
    }
    catch(const std::exception& e)
    {
        if (this->isChar(str))
            value = str[0];
        else
            throw;
    }
}

Conversion::Conversion(const Conversion& copy) : str(copy.getStr()), value(copy.getValue())
{}

long double     Conversion::getValue(void) const
{
    return (value);
}

int          Conversion::getPrecision(const std::string& str)
{
    int prec;
    int pos;

    prec = 1;
    if ((pos = str.find('.')) != -1 && str[pos + 1] && str[pos + 1] != 'f')
        prec = str.substr(pos).length() - 1 -
            (str[str.length() - 1] == 'f' ? true : false);
    return (prec);
}

std::string     Conversion::getStr(void) const
{
    return (str);
}

char    Conversion::getChar(void) const
{
    long long int lli = static_cast<long long int>(value);

    if (lli < CHAR_MIN || lli > CHAR_MAX)
        throw ImpossibleException();
    char ch = static_cast<char>(value);
    if (!std::isprint(ch))
        throw NonDisplayableException();
    return (ch);
}

int     Conversion::getInt(void) const
{
    long long int lli = static_cast<long long int>(value);

    if (lli > INT_MAX || lli < INT_MIN)
        throw ImpossibleException();
    return (static_cast<int>(value));
}

float   Conversion::getFloat(void) const
{
    (value + __LDBL_EPSILON__) < -__FLT_MAX__ ? throw InfException("-inff") : 0;
            value > __FLT_MAX__ ? throw InfException("+inff") : 0;
        
    return (static_cast<float>(value));
}

double  Conversion::getDouble(void) const
{

    (value + __LDBL_EPSILON__) < -__DBL_MAX__ ? throw InfException("-inf") : 0;
            value > __DBL_MAX__ ? throw InfException("+inf") : 0;

    return (static_cast<double>(value));
}

bool    Conversion::isChar(const std::string& str)
{
    if ((str.size() == 1) && std::isprint(str[0]) && !('0' <= str[0] && str[0] <= '9'))
        return (true);
    return (false);
}

const char * Conversion::ImpossibleException::what() const throw()
{
    return ("impossible");
}

const char * Conversion::NonDisplayableException::what() const throw()
{
    return ("Non displayable");
}

Conversion::InfException::InfException(std::string str) : excep_str(str)
{}

const char * Conversion::InfException::what() const throw()
{
    return (excep_str.c_str());
}
Conversion::InfException::~InfException() throw()
{}

std::ostream& operator << (std::ostream& cout, const Conversion& type)
{
    int             prec;
    prec =          Conversion::getPrecision(type.getStr());

    cout   << "char: "; 
    try                       { char ch =  type.getChar(); cout << "'" << ch << "'"; }
    catch(std::exception& ex) { std::cerr << ex.what();}
    cout   << std::endl;

    cout   << "int: "; 
    try                       { cout << type.getInt(); }
    catch(std::exception& ex) { std::cerr << ex.what();}
    cout   << std::endl;

    cout   << "float: "; 
    try                       { cout << std::fixed << std::setprecision(prec) << type.getFloat() << 'f';}
    catch(std::exception& ex) { std::cerr << ex.what();}
    cout   << std::endl;

    cout   << "double: "; 
    try                       { cout << std::fixed << std::setprecision(prec) << type.getDouble(); }
    catch(std::exception& ex) { std::cerr << ex.what();}

    return (cout);
}