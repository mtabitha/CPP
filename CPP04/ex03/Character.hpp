#ifndef CHARACTER_HPP
# define CHARACTER_HPP
#include <iostream>

class AMateria;

class ICharacter
{
public:
    virtual ~ICharacter() {}
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter
{
private:
    std::string name;
    static const int nbMateria = 4;
    AMateria    *inventory[nbMateria];
public:
    Character(std::string name);
    Character(const Character& copy);
    Character& operator = (const Character& copy);
    std::string const & getName() const;
    const AMateria* getInventory(int idx) const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
    ~Character();
};

#endif 