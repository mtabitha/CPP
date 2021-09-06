#include "Intern.hpp"

Intern::Intern()
{
    massFunc[0] = &Intern::createShrubberyForm;
    massFunc[1] = &Intern::createRobotomyForm;
    massFunc[2] = &Intern::createPardonForm;
}

Form*   Intern::createShrubberyForm(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

Form*   Intern::createRobotomyForm(std::string target)
{
    return (new RobotomyRequestForm(target));
}

Form*   Intern::createPardonForm(std::string target)
{
    return (new PresidentialPardonForm(target));
}


Form*   Intern::makeForm(std::string name, std::string target)
{
    std::string nameStr[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};

    for (int i = 0; i < 3; ++i)
        if (nameStr[i] == name)
            return ((this->*(massFunc[i]))(target));
    std::cout << "Unknown Form name" << std::endl;
    return (nullptr);
}
