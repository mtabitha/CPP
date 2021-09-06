#ifndef SHRUBBERY_HPP
# define SHRUBBERY_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    std::string target;
public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm& copy);

    std::string getTarget(void) const;    
    void        executeForm(void) const;
};

#endif 