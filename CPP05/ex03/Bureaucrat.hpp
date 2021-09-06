#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <fstream>

class Form;
# include "Form.hpp"

class Bureaucrat
{
    const std::string   name;
    int                 grade;
public:
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat& copy);

    void        incGrade(void);
    void        decGrade(void);
    void        signForm(Form& f) const;
    void        executeForm(const Form& f) const;
    
    std::string getName(void) const;
    int         getGrade(void) const;

    class GradeTooHighException : public std::exception
    {
    public:
        const char* what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
    public:
        const char* what() const throw();
    };
};

std::ostream& operator << (std::ostream& cout, const Bureaucrat& b);

#endif