#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "Materia.hpp"

class IMateriaSource
{
public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource
{
private:
    static const int nbMateria = 4;
    AMateria    *storage[nbMateria];
public:
    MateriaSource();
    ~MateriaSource();
    void learnMateria(AMateria* copy);
    AMateria* createMateria(std::string const & type);
};

#endif