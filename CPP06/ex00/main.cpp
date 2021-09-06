#include "Conversion.hpp"

std::string     validStr(std::string str)
{
    int i = 0;

    while (str[i] == '\t' || str[i] == ' ')
        str.erase(i, 1);
    i = str.length() - 1;
    while (str[i] == '\t' || str[i] == ' ')
        str.erase(i--, 1);
    if (str.find(' ') != std::string::npos || str.empty() || str == "inf" || str == "inff")
        return ("");
    return (str);
}

int main(int argc, char *argv[])
{
    std::string     str;
    Conversion      *type;

    if (argc != 2)
    {
        std::cout << "Bad args" << std::endl;
        return (1);
    }
    if ((str = validStr(argv[1])).empty())
    {
        std::cout << "Bad args" << std::endl;
        return (1);
    }
    try
    {
        type = new Conversion(str);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Bad Type" << '\n';
        return (1);
    }
    
    std::cout << *type << std::endl;
    delete type;
    return (0);
}