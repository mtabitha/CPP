#include "Zombie.hpp"

void    Zombie::announce(void) const
{
    std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string& name)
{
    this->name = name;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " died!!!" << std::endl; 
}