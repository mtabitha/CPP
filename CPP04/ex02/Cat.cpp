#include "Cat.hpp"

Cat::Cat()
{
    brain = new Brain();
    std::cout << "Cat crated";
    printBrainAdd();
    setType("Cat");
}

Cat::Cat(const Cat& copy)
{
    brain = new Brain();
    *brain = copy.getBrain();
    setType(copy.getType());
    std::cout << "After copying"; printBrainAdd();
}

Cat& Cat::operator = (const Cat& copy)
{
    if (this != &copy)
    {
        delete brain;
        brain = new Brain();
        *brain = copy.getBrain();
        setType(copy.getType());
    }
    std::cout << "After copying"; printBrainAdd();
    return (*this);
}

void            Cat::printBrainAdd(void) const
{
    std::cout << " ---- brain addres: "<< brain << std::endl;
}

Brain&          Cat::getBrain(void) const
{
    return (*brain);
}

void            Cat::makeSound(void) const
{
    std::cout << "Cat: MIEU MIEU MIEU" << std::endl;  
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat deleted" << std::endl;
}