#include "Zombie.hpp"

int     main(void)
{
    Zombie *ptr;

    (ptr = newZombie("HEAP"))->announce();
    randomChump("STACK");
    delete ptr;
    return 0;
}