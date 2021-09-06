#include "Karen.hpp"

int     main(int argc, char *argv[])
{
    Karen test;

    if (argc == 2)
        test.complain(argv[1]);
    return (0);
}