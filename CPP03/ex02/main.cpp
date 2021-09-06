#include "FragTrap.hpp"

int main( void )
{
	FragTrap A("Hello");
	FragTrap B(A);

	A.attack("World");
	B.takeDamage(20);
	A.highFivesGuys();
	B.beRepaired(10);
	return (0);
}