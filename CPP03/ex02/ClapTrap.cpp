#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Creating a ClapTrap"  << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "Creating a ClapTrap with the name " << getName() << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	*this = copy;
	std::cout << "Copy a ClapTrap" << std::endl;
}

ClapTrap& ClapTrap::operator = (const ClapTrap& copy)
{
	if (this != &copy)
	{
		setName(copy.getName());
		setHitPoints(copy.getHitPoints());
		setEnergyPoints(copy.getEnergyPoints());
		setAttackDamage(copy.getAttackDamage());
		std::cout << "Assignation ClapTrap with the name " << getName() << std::endl;
	}
	return (*this);
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << getName() << " attacks " << target << ", causing "<< getAttackDamage() << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << getName() << " got damage with a value of " << amount << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << getName() << " has been repaired to a value of " << amount << std::endl;
}

std::string     ClapTrap::getName(void) const
{
	return (name);
}

int             ClapTrap::getHitPoints(void) const
{
	return (hitPoints);
}

int             ClapTrap::getEnergyPoints(void) const
{
	return (energyPoints);
}

int             ClapTrap::getAttackDamage(void) const
{
	return (attackDamage);
}

void			ClapTrap::setName(std::string name)
{
	this->name = name;
}

void            ClapTrap::setHitPoints(int hitPoints)
{
	this->hitPoints = hitPoints;
}

void            ClapTrap::setEnergyPoints(int energyPoints)
{
	this->energyPoints = energyPoints;
}

void            ClapTrap::setAttackDamage(int attackDamage)
{
	this->attackDamage = attackDamage;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << getName() << " was removed" << std::endl;
}