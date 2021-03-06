#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& copy);
    ScavTrap& operator = (const ScavTrap& copy);
    void attack(std::string const & target);
    void guardGate(void);
    ~ScavTrap();
};

#endif 