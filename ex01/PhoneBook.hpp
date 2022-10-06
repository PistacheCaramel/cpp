#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>

class PhoneBook {

public:
	Contact contacts[8];
	PhoneBook(void);
	~PhoneBook(void);
	void	search(int nbcontacts);
	void	print_contacts(int nbcontacts);
	void	print_info(int nbcontacts, std::string str);
	void	print_contact(int nbcontacts);
};
#endif
