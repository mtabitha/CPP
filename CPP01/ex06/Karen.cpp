#include "Karen.hpp"

Karen::Karen()
{
    mass_f[0] = &Karen::debug;
    mass_f[1] = &Karen::info;
    mass_f[2] = &Karen::warning;
    mass_f[3] = &Karen::error;
}

void Karen::debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl << std::endl;
}

void Karen::info( void )
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
}

void Karen::warning( void )
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month."<< std::endl << std::endl;
}

void Karen::error( void )
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
}

void Karen::complain( std::string level )
{
    int i;
    std::string lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (i = 0; i < 4; ++i)
        if (level == lvl[i])
            break ;
    switch (i)
    {
        std::cout << "[ " << lvl[i] << " ]" << std::endl;
        case (0):
            (this->*(mass_f[0]))();
        case (1):
            (this->*(mass_f[1]))();
        case (2):
            (this->*(mass_f[2]))();
        case (3):
            (this->*(mass_f[3]))();
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        std::cout << std::endl;
    }
}
