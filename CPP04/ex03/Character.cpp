#include "Materia.hpp"

Character::Character(std::string name) : name(name)
{
    for (int i = 0; i < nbMateria; ++i)
        inventory[i] = nullptr;
}

Character::Character(const Character& copy)
{
    name = copy.getName();
    for ( int i = 0; i < nbMateria; ++i)
        if (copy.getInventory(i) != nullptr)
            inventory[i] = copy.getInventory(i)->clone();
}

Character& Character::operator = (const Character& copy)
{
    for (int i = 0; i < nbMateria; ++i)
        if (inventory[i] != nullptr)
            delete inventory[i];
    name = copy.getName();
    for ( int i = 0; i < nbMateria; ++i)
        if (copy.getInventory(i) != nullptr)
            inventory[i] = copy.getInventory(i)->clone();
    return (*this);
}

std::string const & Character::getName() const
{
    return (name);
}

const AMateria* Character::getInventory(int idx) const
{
    return inventory[idx];
}

void Character::equip(AMateria* m)
{
    for( int i = 0; i < nbMateria; ++i)
        if (inventory[i] == nullptr)
        {
            inventory[i] = m;
            break;
        }
        
}

void Character::unequip(int idx)
{
    inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target)
{
    inventory[idx]->use(target);
}

Character::~Character()
{
    for (int i = 0; i < nbMateria; ++i)
        if (inventory[i] != nullptr)
            delete inventory[i];
}
