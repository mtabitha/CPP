#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Creating a ScavTrap " << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Creating a ScavTrap with the name " << getName() << std::endl;
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap()
{
    std::cout << "Creating a ScavTrap" << std::endl;
    *this = copy;
}

ScavTrap& ScavTrap::operator = (const ScavTrap& copy)
{
	if (this != &copy)
	{
		setName(copy.getName());
		setHitPoints(copy.getHitPoints());
		setEnergyPoints(copy.getEnergyPoints());
		setAttackDamage(copy.getAttackDamage());
		std::cout << "Assignation ScavTrap with the name " << getName() << std::endl;
	}
	return (*this);

}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing "<< getAttackDamage() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << getName() << " have enterred in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << getName() << " was removed" << std::endl;
}
