#include "ScavTrap.hpp"

int main( void )
{
	ScavTrap A("Hello");
	ScavTrap B(A);

	A.attack("World");
	B.takeDamage(20);
	A.guardGate();
	B.beRepaired(10);
	return (0);
}