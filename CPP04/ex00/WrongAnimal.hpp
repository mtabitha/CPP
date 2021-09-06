#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
private:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& copy);
    WrongAnimal& operator = (const WrongAnimal& copy);
    std::string     getType(void) const;
    void            makeSound(void) const;
    void            setType(std::string type);
};

#endif
