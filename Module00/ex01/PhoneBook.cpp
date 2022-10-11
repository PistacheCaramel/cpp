#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

PhoneBook::PhoneBook(void){}

PhoneBook::~PhoneBook(void){}

Contact	*PhoneBook::get_contacts(void){return (this->contacts);}

void	print_str(std::string str)
{
	std::string copy;

	if (str.size() <= 10)
		std::cout << str;
	else
	{
		copy = str.substr(0, 10);
		copy[9] = '.';
		std::cout << copy;
	}
}

void	PhoneBook::print_contacts(int nbcontacts)
{
	int	i;

	i = 0;
	while (i < nbcontacts)
	{
		std::cout.width(10);
		std::cout << i;
		std::cout << "|";
		std::cout.width(10);
		print_str(get_contacts()[i].get_first_name());
		std::cout << "|";
		std::cout.width(10);
		print_str(get_contacts()[i].get_last_name());
		std::cout << "|";
		std::cout.width(10);
		print_str(get_contacts()[i].get_nickname());
		std::cout << std::endl;
		i++;
	}

}

void	PhoneBook::print_info(int nbcontacts, std::string str)
{	
	std::cout << "Index:" << str << std::endl;
	std::cout << "First Name:"
			<< get_contacts()[str[0] - 48].get_first_name()
			<< std::endl;
	std::cout << "Last Name:"
			<< get_contacts()[str[0] - 48].get_last_name()
			<< std::endl;
	std::cout << "Nickname:"
			<< get_contacts()[str[0] - 48].get_nickname()
			<< std::endl;
	std::cout << "Phone Number:"
			<< get_contacts()[str[0] - 48].get_phone_number()
			<< std::endl;
	std::cout << "Darkest Secret:"
			<< get_contacts()[str[0] - 48].get_darkest_secret()
			<< std::endl;
}


int	PhoneBook::print_contact(int nbcontacts)
{
	std::string	str;

	if (nbcontacts == 0)
	{
		std::cout << "Phonebook empty." << std::endl;
		return (0);
	}
	std::cout << "Index:";
	if (!(str = get_stream()).size())
			return (1);
	if (str.size() > 1 || !(str[0] >= '0' && str[0] - 48 < nbcontacts))
	{
		std::cout << "Wrong index." << std::endl;
		print_contact(nbcontacts);
	}
	else
		print_info(nbcontacts, str);
	return (0);
}

int	PhoneBook::search(int nbcontacts)
{
	std::string	str;

	std::cout.width(10);
	std::cout << "Index";
	std::cout << "|";
	std::cout.width(10);
	std::cout << "First Name";
	std::cout << "|";
	std::cout.width(10);
	std::cout << "Last Name";
	std::cout << "|";
	std::cout.width(10);
	std::cout << "Nickname" << std::endl;
	print_contacts(nbcontacts);
	if (print_contact(nbcontacts))
		return (1);
	return (0);

}			
