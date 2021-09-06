#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Creating a FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Creating a FragTrap with the name " << getName() << std::endl;
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap()
{
    std::cout << "Creating a FragTrap" << std::endl;
    *this = copy;
}

FragTrap& FragTrap::operator = (const FragTrap& copy)
{
	if (this != &copy)
	{
		setName(copy.getName());
		setHitPoints(copy.getHitPoints());
		setEnergyPoints(copy.getEnergyPoints());
		setAttackDamage(copy.getAttackDamage());
		std::cout << "Assignation FragTrap with the name " << getName() << std::endl;
	}
	return (*this);
}

void FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap " << getName() << " attacks " << target << ", causing "<< getAttackDamage() << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << getName() << " a positive high fives request " << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << getName() << " was removed" << std::endl;
}
