#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& copy);
    ClapTrap& operator = (const ClapTrap& copy);
    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string     getName(void) const;
    int             getHitPoints(void) const;
    int             getEnergyPoints(void) const;
    int             getAttackDamage(void) const;
    void			setName(std::string);
    void            setHitPoints(int);
    void            setEnergyPoints(int);
    void            setAttackDamage(int);
    ~ClapTrap();
private:
    std::string     name;
    int             hitPoints;
    int             energyPoints;
    int             attackDamage;
};

#endif