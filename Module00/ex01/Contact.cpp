#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <cstddef>
#include <stdlib.h>

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
	return;
}

std::string	Contact::get_first_name(void){return (this->first_name);}
std::string	Contact::get_last_name(void){return (this->last_name);}
std::string	Contact::get_nickname(void){return (this->nickname);}
std::string	Contact::get_phone_number(void){return (this->phone_number);}
std::string	Contact::get_darkest_secret(void){return (this->darkest_secret);}

int	Contact::add_contact(void)
{	
	std::size_t found;

	std::cout << "First Name:";
	if (!(this->first_name = get_stream()).size())
		return (1);
	std::cout << "Last Name:";
	if (!(this->last_name = get_stream()).size())
		return (1);
	std::cout << "Nickname:";
	if (!(this->nickname = get_stream()).size())
		return (1);
	std::cout << "Phone Number:";
	if (!(this->phone_number = get_stream()).size())
		return (1);
	while (this->phone_number.find_first_not_of("0123456789")
			!= std::string::npos)
	{
		std::cout << "Please enter a correct number." << std::endl;
		if (!(this->phone_number = get_stream()).size())
			return (1);
	}
	std::cout << "Darkest Secret:";
	if (!(this->darkest_secret = get_stream()).size())
		return (1);
	return (0);
}
