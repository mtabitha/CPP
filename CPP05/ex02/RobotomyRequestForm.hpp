#ifndef ROBOT_HPP
# define ROBOT_HPP

# include "Form.hpp"
# include <random>

class RobotomyRequestForm : public Form
{
    std::string target;
public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm& copy);

    std::string getTarget(void) const;    
    void    executeForm(void) const;
};

#endif 