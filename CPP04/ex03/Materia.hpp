#ifndef MATERIA_HPP
# define MATERIA_HPP

# include <iostream>
# include "Character.hpp"

class AMateria
{
protected:
    std::string     type;
public:
    virtual ~AMateria();
    AMateria(std::string const & type);
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target) = 0;
    
};

class Ice : public AMateria
{
public:
    Ice();
    Ice& operator = ( const Ice& copy);
    AMateria* clone() const;
    void use(ICharacter& target);
    ~Ice(){}
};

class Cure : public AMateria
{
public:
    Cure();
    Cure& operator = ( const Cure& copy);
    AMateria* clone() const;
    void use(ICharacter& target);
    ~Cure(){}

};

#endif