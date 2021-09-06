#include "ClapTrap.hpp"

int     main( void )
{
    ClapTrap A("HELLO");
    ClapTrap B(A);

    A.attack("WORLD");
    B.takeDamage(3);
    B.beRepaired(2);
    return (0);
}