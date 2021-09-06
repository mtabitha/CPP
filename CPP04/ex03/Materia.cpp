#include "Materia.hpp"

AMateria::AMateria(std::string const & type) : type(type)
{}
    
std::string const & AMateria::getType() const
{
    return (type);
}
AMateria::~AMateria()
{}

Cure::Cure() : AMateria("cure")
{}

AMateria* Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals  "<< target.getName() << "'s wounds *" << std::endl;
}

Ice::Ice() : AMateria("ice")
{}

AMateria* Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}