#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
private:
    Form*   (Intern::*massFunc[3])(std::string target);
    Form*   createShrubberyForm(std::string target);
    Form*   createRobotomyForm(std::string target);
    Form*   createPardonForm(std::string target);
public:
    Intern();
    Form*   makeForm(std::string name, std::string target); 
};

#endif