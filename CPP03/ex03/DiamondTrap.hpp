#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
public:
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap& copy);
    DiamondTrap& operator = (const DiamondTrap& copy);
    void attack(std::string const & target);
    void whoAmI(void);
    void setName(std::string name);
    std::string getName(void) const;
    ~DiamondTrap();
private:
    std::string name;
};



#endif