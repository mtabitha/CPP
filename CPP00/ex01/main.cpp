#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook 	phone_book;
	std::string	cmd;

	std::cout.width(44);
	std::cout << "\033[1;32m	<<< PhoneBook >>>	\033[1;0m" << std::endl;
	std::cout << "# Choose command: ADD, SEARCH, EXIT" << std::endl;
	std::cout << "> ";	
	for (int i = 0; std::getline(std::cin, cmd); i = i >= CONT_NB ? 0 : i)
	{
		if (cmd == "ADD")
			phone_book.add_contact(i++);
		else if (cmd == "SEARCH")
			phone_book.print_contacts();
		else if (cmd == "EXIT")
			break ;
		else if (cmd == "")
			;
		else 
			std::cout << "\033[1;31merror: Unknown command\033[1;0m\n";
		std::cout << "> ";
	}
	return (0);
}