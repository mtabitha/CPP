#ifndef FORM_HPP
# define FORM_HPP

class Bureaucrat;

# include "Bureaucrat.hpp"


class Form
{
    const std::string   name;
    const int           gradeSign;
    const int           gradeExec;
    bool                isSign;
public:
    Form(std::string name, int gS, int gE);
    Form(const Form& copy);

    std::string     getName(void) const;
    int             getGradeSign(void) const;
    int             getGredeExec(void) const;
    bool            getSign(void) const;

    void    beSigned(const Bureaucrat& b);

    class   GradeTooLowException : public std::exception
    {
    public:
        const char *    what() const throw();
    };
    class   GradeTooHighException : public std::exception
    {
    public:
        const char *    what() const throw();
    };
};

std::ostream& operator << (std::ostream& cout, const Form& f);

#endif