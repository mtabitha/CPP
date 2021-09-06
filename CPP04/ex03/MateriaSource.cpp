#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < nbMateria; ++i)
        storage[i] = nullptr;
}

void MateriaSource::learnMateria(AMateria* copy)
{
    for (int i = 0; i < nbMateria; ++i)
        if (storage[i] == nullptr)
        {
            storage[i] = copy;
            break ;
        }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; (i < nbMateria) && (storage[i] != nullptr); ++i)
        if (storage[i]->getType() == type)
            return (storage[i]->clone());
    return (0);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < nbMateria; ++i)
        if (storage[i] != nullptr)
            delete storage[i];
}