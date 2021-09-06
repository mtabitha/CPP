#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), name(name)
{
    std::cout << "Creating a DiamondTrap with the name " << getName() << std::endl;
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(30);
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
    std::cout << "Creating a DiamondTrap" << std::endl;
    *this = copy;
}

DiamondTrap& DiamondTrap::operator = (const DiamondTrap& copy)
{
    if (this != &copy)
	{
        DiamondTrap::setName(copy.DiamondTrap::getName());
		setName(copy.getName());
		setHitPoints(copy.getHitPoints());
		setEnergyPoints(copy.getEnergyPoints());
		setAttackDamage(copy.getAttackDamage());
		std::cout << "Assignation DiamondTrap with the name " << getName() << std::endl;
	}
	return (*this);
}

void			DiamondTrap::setName(std::string name)
{
	this->name = name;
}

std::string     DiamondTrap::getName(void) const
{
	return (name);
}

void DiamondTrap::attack(std::string const & target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap name " << getName() << std::endl  << "ClapTrap name " << ClapTrap::getName() << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << getName() << " was removed" << std::endl;
}
