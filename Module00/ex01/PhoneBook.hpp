#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>

class PhoneBook {

private:
	Contact	contacts[8];
public:
			PhoneBook(void);
			~PhoneBook(void);
	int		search(int nbcontacts);
	void		print_contacts(int nbcontacts);
	void		print_info(int nbcontacts, std::string str);
	int		print_contact(int nbcontacts);
	Contact		*get_contacts(void);
};

std::string	get_stream(void);

#endif
