#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#define CONT_NB 8

class PhoneBook
{
public:
    PhoneBook ();
    void    add_contact(int nbr);
	void	print_contacts(void) const;
    ~PhoneBook ();
private:
	void	head_PhoneBook(void) const;
    void	print_search_contact(void) const;
    Contact *mass[CONT_NB];
};

#endif