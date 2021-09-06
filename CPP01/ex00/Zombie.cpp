#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{
   std::cout << "Zombie " << name << " woke up!!!" << std::endl; 
}
void    Zombie::announce(void) const
{
    std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " died!!!" << std::endl; 
}