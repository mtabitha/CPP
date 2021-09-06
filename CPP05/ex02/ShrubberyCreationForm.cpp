#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 25, 5) , target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) 
: Form(copy.getName(), copy.getGradeSign(), copy.getGradeExec()), target(copy.getTarget())
{}

std::string ShrubberyCreationForm::getTarget(void) const 
{
    return (target);
}

void    ShrubberyCreationForm::executeForm() const
{
    std::ofstream   fin;

    fin.open(getTarget() + "_shrubbery");
    fin <<  "              .     .  .      +     .      .          ." << std::endl
        <<  "     .       .      .     #       .           ." << std::endl
        <<  "        .      .         ###            .      .      ." << std::endl
        <<  "      .      .   \"#:. .:##\"##:. .:#\"  .      ." << std::endl
        <<  "          .      . \"####\"###\"####\"  ." << std::endl
        <<  "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       ." << std::endl
        <<  "  .             \"#########\"#########\"        .        ." << std::endl
        <<  "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       ." << std::endl
        <<  "     .     .  \"#######\"\"##\"##\"\"#######\"                  ." << std::endl
        <<  "                .\"##\"#####\"#####\"##\"           .      ." << std::endl
        <<  "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     ." << std::endl
        <<  "      .     \"#######\"##\"#####\"##\"#######\"      .     ." << std::endl
        <<  "    .    .     \"#####\"\"#######\"\"#####\"    .      ." << std::endl
        <<  "            .     \"      000      \"    .     ." << std::endl
        <<  "       .         .   .   000     .        .       ." << std::endl
        <<  ".. .. ..................O000O........................ ...... ..." << std::endl;
    fin.close();
}
