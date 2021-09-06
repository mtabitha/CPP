#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
private:
    std::string type;
public:
    Animal();
    Animal(const Animal& copy);
    Animal& operator = (const Animal& copy);
    std::string     getType(void) const;
    virtual void            makeSound(void) const;
    void            setType(std::string type);
    virtual ~Animal();
};

#endif
