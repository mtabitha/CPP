#include <iostream>

int     main(void)
{
    std::string str = "HI THIS IS BRIAN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout.width(11);
    std::cout << std::right;
    std::cout <<    "string: " << &str  << " " + str << std::endl;
    std::cout << "stringPTR: " << stringPTR << " " + *stringPTR << std::endl;
    std::cout << "stringREF: " << &stringREF << " " + stringREF << std::endl;
    return (0);
}