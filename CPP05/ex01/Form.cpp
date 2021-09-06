#include "Form.hpp"

Form::Form(std::string name, int gS, int gE) 
: name(name), gradeSign(gS), gradeExec(gE), isSign(false)
{
    if (gradeSign < 1 || gradeExec < 1)
        throw GradeTooHighException();
    else if (gradeSign > 150 || gradeExec > 150)
        throw GradeTooLowException();
}

Form::Form(const Form& copy) 
: name(copy.getName()), gradeSign(copy.getGradeSign()), gradeExec(copy.getGredeExec()), isSign(copy.getSign())
{}

std::string     Form::getName(void) const
{
    return (name);
}

int             Form::getGradeSign(void) const
{
    return (gradeSign);
}

int             Form::getGredeExec(void) const
{
    return (gradeExec);
}

bool            Form::getSign(void) const
{
    return (isSign);
}

void            Form::beSigned(const Bureaucrat& b)
{
    if (gradeSign >= b.getGrade())
        isSign = true;
    else
        throw Bureaucrat::GradeTooLowException();
}

const char *    Form::GradeTooLowException::what() const throw()
{
    return ("Form Too Low Grade");
}

const char *    Form::GradeTooHighException::what() const throw()
{
    return ("Form Too High Grade");
}

std::ostream& operator << (std::ostream& cout, const Form& f)
{
    return (cout << std::endl << "Form Name: " << f.getName() << std::endl
                 << "Grade for sign: " << f.getGradeSign() << std::endl
                 << "Grade for exec: " << f.getGredeExec() << std::endl
                 << "Signed: " << f.getSign());
}

