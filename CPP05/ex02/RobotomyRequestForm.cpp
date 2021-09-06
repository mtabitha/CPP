#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) 
: Form(copy.getName(), copy.getGradeSign(), copy.getGradeExec()), target(copy.getTarget())
{}

std::string RobotomyRequestForm::getTarget(void) const 
{
    return (target);
}

void    RobotomyRequestForm::executeForm(void) const
{
    bool    r;
    int     nbr;
    
    std::random_device random_device;
    std::mt19937 generator(random_device());
    std::uniform_int_distribution<> distribution(0, 10);

    nbr = distribution(generator);
    r = nbr > 5 ? true : false;
    std::cout << "* DRILLING NISES *" << std::endl;
    if (r)
        std::cout << getTarget() << " has been robotomized successfully" << std::endl;
    else
        std::cout << getTarget() << " was not successfully robotized" << std::endl;
}   
