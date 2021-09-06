#include "DiamondTrap.hpp"

int main( void )
{
	DiamondTrap A("Hello");

	A.attack("World");
	A.takeDamage(20);
	A.highFivesGuys();
	A.beRepaired(10);
	A.guardGate();
	A.whoAmI();
	return (0);
}