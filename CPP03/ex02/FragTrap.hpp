#ifndef FRAGRAP_HPP
# define FRAGRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap(std::string name);
    FragTrap(const FragTrap& copy);
    FragTrap& operator = (const FragTrap& copy);
    void attack(std::string const & target);
    void highFivesGuys(void);
    ~FragTrap();
};

#endif