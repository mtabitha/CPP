#include "Intern.hpp"

int main(void)
{
    try
    {
        Bureaucrat Vitya("Vitya", 1);
        Intern someRandomIntern;
        Form* rrf;

        rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "fir");
        if (rrf)
        {
            Vitya.signForm(*rrf);
            Vitya.executeForm(*rrf);
        }
           
    }
    catch (std::exception &ex)
    {
        std::cerr << ex.what() << std::endl;
    }
    return (0);
}