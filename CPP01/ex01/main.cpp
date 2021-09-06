#include "Zombie.hpp"
#define COUNT 5 
int     main(void)
{
    Zombie *ptr;

    ptr = zombieHorde(COUNT, "ZOMBIE");
    for (int i = 0; i < COUNT; ++i)
        ptr[i].announce();

    delete [] ptr;
    return 0;
}