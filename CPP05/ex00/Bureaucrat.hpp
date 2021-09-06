#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
    const std::string   name;
    int                 grade;
public:
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat& copy);

    void        incGrade(void);
    void        decGrade(void);

    std::string getName(void) const;
    int         getGrade(void) const;

    ~Bureaucrat();

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