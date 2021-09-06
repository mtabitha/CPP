#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : name(copy.getName()), grade(copy.getGrade())
{}

void        Bureaucrat::incGrade(void)
{
    --grade < 1 ? throw GradeTooHighException() : 0;
}

void        Bureaucrat::decGrade(void)
{
    ++grade > 150 ? throw GradeTooLowException() : 0;
}

void        Bureaucrat::signForm(Form& f) const
{
    try
    {
        f.beSigned(*this);
        std::cout << *this << " signs " << f << std::endl;
    }
    catch (std::exception& ex)
    {
        std::cout << *this << " cannot sign " << f << std::endl << "because " << ex.what() << std::endl;;
    }
}

void        Bureaucrat::executeForm(const Form& f) const
{
    try
    {
        f.execute(*this);
    }
    catch (std::exception& ex)
    {
        std::cout << *this << " cannot execute " << f << std::endl << "because " << ex.what() << std::endl;
    }
}

std::string Bureaucrat::getName(void) const
{
    return (name);
}

int         Bureaucrat::getGrade(void) const
{
    return (grade);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Bureaucrat Too High Grade");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Bureaucrat Too Low Grade");
}

std::ostream& operator << (std::ostream& cout, const Bureaucrat& b)
{
    return (cout << b.getName() << ", bureaucrat grade " << b.getGrade());
}