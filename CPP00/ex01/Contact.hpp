#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iomanip>
#include <iostream>
#include <string>

class Contact
{
public:
	void				set_contact(void);
	const std::string&	get_first_name() const;
	const std::string&	get_last_name() const;
	const std::string&	get_nickname() const;
	const std::string&	get_phone_number() const;
	const std::string&	get_darkest_secret() const;

	void	print_all_inf() const;
	void	print_first_name() const;
	void	print_last_name() const;
	void	print_nickname() const;
	void	print_phone_number() const;
	void	print_darkest_secret() const;
private:
    std::string     first_name;
    std::string     last_name;
	std::string     nickname;
	std::string     phone_number;
	std::string     darkest_secret;
};

#endif 
