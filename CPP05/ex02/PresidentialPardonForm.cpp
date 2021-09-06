#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 145, 137), target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) 
: Form(copy.getName(), copy.getGradeSign(), copy.getGradeExec()), target(copy.getTarget())
{}

std::string PresidentialPardonForm::getTarget(void) const 
{
    return (target);
}

void    PresidentialPardonForm::executeForm() const
{
    std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
