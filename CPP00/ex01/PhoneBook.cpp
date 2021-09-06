#include "PhoneBook.hpp"

PhoneBook::PhoneBook ()
{
    for (int i = 0; i < CONT_NB; ++i)
        mass[i] = nullptr;
}

void    PhoneBook::add_contact(int nbr)
{
    if (mass[nbr] == nullptr)
        mass[nbr] = new Contact;
    mass[nbr]->set_contact();
}

void	PhoneBook::head_PhoneBook(void) const
{
	std::cout << "\033[1;36m";
    std::cout << std::setw(10);
    std::cout << "index" << "|";
    std::cout << std::setw(10);
    std::cout << "first name" << "|";
    std::cout << std::setw(10);
    std::cout << "last name" << "|";
    std::cout << std::setw(10);
    std::cout << "nickname" << "|" << std::endl;       
    std::cout << "----------|----------|----------|----------|\033[1;0m" << std::endl;
}

void	PhoneBook::print_search_contact(void) const
{
	std::string index;
	int			int_index;

	std::cout << "Enter index (0 to exit): ";
    while (std::getline(std::cin, index))
    {
        if ((index.size() == 1) && (index[0] >= '0' && index[0] <= '9'))
		{
			int_index = index[0] - '0' - 1;
			if (!(int_index + 1))
				return ;
			else if (int_index < CONT_NB && mass[int_index])
			{
				mass[int_index]->print_all_inf();
				return ;
			}
			else
				std::cout << "\033[1;31merror: Contact " << index << " does not exist\033[1;0m\n";
		}
		else
			std::cout << "\033[1;31merror: Wrong char\033[1;0m\n";
		std::cout << "Enter index (0 to exit): ";
    }
}

void	PhoneBook::print_contacts(void) const
{
	std::cout << "\033[1;36m";
    if (*mass == nullptr)
    {
        std::cout.width(47);
        std::cout << "<--- The PhoneBook is empty --->\033[1;0m" << std::endl;
        return ; 
    }
	head_PhoneBook();
    for (int i = 0; (mass[i] != nullptr) && (i < CONT_NB); ++i)
    {
		std::cout << std::setw(10);
    	std::cout << (i + 1) << "|";
    	std::cout << std::setw(10);
		if (mass[i]->get_first_name().size() > 10)
    		std::cout << mass[i]->get_first_name().substr(0, 9) + "." << "|";
    	else
			std::cout << mass[i]->get_first_name() << "|";
		std::cout << std::setw(10);
		if (mass[i]->get_last_name().size() > 10)
    		std::cout << mass[i]->get_last_name().substr(0, 9) + "." << "|";
    	else
			std::cout << mass[i]->get_last_name() << "|";
    	std::cout << std::setw(10);
		if (mass[i]->get_nickname().size() > 10)
    		std::cout << mass[i]->get_nickname().substr(0, 9) + "." << "|";
    	else
			std::cout << mass[i]->get_nickname() << "|";      
    	std::cout << std::endl;
	}
	print_search_contact();
}

PhoneBook::~PhoneBook ()
{
    for (int i = 0; (mass[i] != nullptr) && (i < CONT_NB); ++i)
        delete mass[i];
}