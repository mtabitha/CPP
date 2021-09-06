#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
    try
    {
        RobotomyRequestForm R("Robot");
        PresidentialPardonForm P("Pardon");
        ShrubberyCreationForm S("Shrubbery");

        Bureaucrat Vitya("Vitya", 45);

        std::cout << "       <--- TEST 0 ---> " << std::endl;
        Vitya.signForm(R);
        Vitya.executeForm(R);

        std::cout << "       <--- TEST 1 ---> " << std::endl;
        Vitya.signForm(P);
        Vitya.executeForm(P);

        std::cout << "       <--- TEST 2 ---> " << std::endl;
        Vitya.signForm(S);
        Vitya.executeForm(S);
           
    }
    catch (std::exception &ex)
    {
        std::cerr << ex.what() << std::endl;
    }


    return (0);
}