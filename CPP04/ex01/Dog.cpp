#include "Dog.hpp"

Dog::Dog()
{
    brain = new Brain();
    std::cout << "Dog crated";
    printBrainAdd();
    setType("Dog");
}

Dog::Dog(const Dog& copy)
{
    brain = new Brain();
    *brain = copy.getBrain();
    setType(copy.getType());
    std::cout << "After copying"; printBrainAdd();

}

Dog& Dog::operator = (const Dog& copy)
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

void            Dog::printBrainAdd(void) const
{
    std::cout << " ---- brain addres: "<< brain << std::endl;
}

Brain&          Dog::getBrain(void) const
{
    return (*brain);
}

void            Dog::makeSound(void) const
{
    std::cout << "Dog: AUF AUF AUF" << std::endl;  
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog deleted" << std::endl;
}