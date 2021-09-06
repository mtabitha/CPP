#include "Contact.hpp"

void	Contact::set_contact(void)
{
	std::cout << "Enter first_name: ";
	std::getline(std::cin, first_name);
	std::cout << "Enter last_name: ";
	std::getline(std::cin, last_name);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Enter phone_number: ";
	std::getline(std::cin, phone_number);
	std::cout << "Enter darkest_secret: ";
	std::getline(std::cin, darkest_secret);
	std::cout << std::endl;
	std::cout << "\033[1;36m<--- Contact is added to the PhoneBook --->\033[1;0m\n" << std::endl;
}

void	Contact::print_all_inf() const
{
	print_first_name();
	print_last_name();
	print_nickname();
	print_phone_number();
	print_darkest_secret();
}

void	Contact::print_first_name() const
{
	std::cout << "First name: " << get_first_name() << std::endl;
}

void	Contact::print_last_name() const
{
	std::cout << "Last name: " << get_last_name() << std::endl;
}

void	Contact::print_nickname() const
{
	std::cout << "Nick name: " << get_nickname() << std::endl;
}

void	Contact::print_phone_number() const
{
	std::cout << "Phone number: " << get_phone_number() << std::endl;
}

void	Contact::print_darkest_secret() const
{
	std::cout << "Darkest secret: " << get_darkest_secret() << std::endl;
}

const std::string&	Contact::get_first_name() const
{
	return (first_name);
}

const std::string&	Contact::get_last_name() const
{
	return (last_name);
}

const std::string&	Contact::get_nickname() const
{
	return (nickname);
}

const std::string&	Contact::get_phone_number() const
{
	return (phone_number);
}

const std::string&	Contact::get_darkest_secret() const
{
	return (darkest_secret);
}