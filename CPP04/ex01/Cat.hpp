#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(const Cat& copy);
    Cat& operator = (const Cat& copy);
    Brain&           getBrain(void) const;
    void            makeSound(void) const;
    ~Cat();
private:
    void            printBrainAdd(void) const;
    Brain   *brain;
};

#endif