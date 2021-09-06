#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Form A3("a3", 5, 20);
        Bureaucrat Vitya("Vitya", 10);

        Vitya.signForm(A3);
    }

    // try
    // {
    //     Form A3("a3", 5, 20);
    //     Bureaucrat Vitya("Vitya", 10);

    //     Vitya.signForm(A3);
    // }

    // try
    // {
    //     Form A3("a3", 299, 20);
    //     Bureaucrat Vitya("Vitya", 10);

    //     Vitya.signForm(A3);
    // }

    // try
    // {
    //     Form A3("a3", 1, 20);
    //     Bureaucrat Vitya("Vitya", 160);

    //     Vitya.signForm(A3);
    // }
    catch (std::exception &ex)
    {
        std::cerr << ex.what() << std::endl;
    }
    return (0);
}