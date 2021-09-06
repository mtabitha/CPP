#ifndef PRESIDENTIAL_HPP
# define PRESIDENTIAL_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
    std::string target;
public:
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm& copy);

    std::string getTarget(void) const;    
    void        executeForm(void) const;
};

#endif 