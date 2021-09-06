#include "Brain.hpp"

Brain::Brain()
{}

Brain::Brain(const Brain& copy)
{
    *this = copy;
}

Brain& Brain::operator = (const Brain& copy)
{
    setIdeas(copy.getIdeas());
    return (*this);
}

const std::string   *Brain::getIdeas(void) const
{
    return (ideas);
}

void    Brain::setIdeas(const std::string *other)
{
    for( int i = 0; i < SIZE_BUF; ++i)
        ideas[i] = other[i];
}

void                Brain::printIdeas(void) const 
{
    for (int i = 0; i < SIZE_BUF; ++i)
        std::cout << getIdeas()[i]<< "---> idea " << i << std::endl;
}

Brain::~Brain()
{}