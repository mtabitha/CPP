#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(const Dog& copy);
    Dog& operator = (const Dog& copy);
    Brain&           getBrain(void) const;
    void            makeSound(void) const;
    ~Dog();
private:
    void            printBrainAdd(void) const;
    Brain   *brain;
};

#endif