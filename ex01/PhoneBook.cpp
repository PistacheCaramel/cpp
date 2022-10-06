#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

PhoneBook::PhoneBook(void){}

PhoneBook::~PhoneBook(void){}

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
		print_str(this->contacts[i].first_name);
		std::cout << "|";
		std::cout.width(10);
		print_str(this->contacts[i].last_name);
		std::cout << "|";
		std::cout.width(10);
		print_str(this->contacts[i].nickname);
		std::cout << std::endl;
		i++;
	}

}

void	PhoneBook::print_info(int nbcontacts, std::string str)
{	
	std::cout << "Index:" << str << std::endl;
	std::cout << "First Name:"
			<< this->contacts[str[0] - 48].first_name
			<< std::endl;
	std::cout << "Last Name:"
			<< this->contacts[str[0] - 48].last_name
			<< std::endl;
	std::cout << "Nickname:"
			<< this->contacts[str[0] - 48].nickname
			<< std::endl;
	std::cout << "Phone Number:"
			<< this->contacts[str[0] - 48].phone_number
			<< std::endl;
	std::cout << "Darkest Secret:"
			<< this->contacts[str[0] - 48].darkest_secret
			<< std::endl;
}

void	PhoneBook::print_contact(int nbcontacts)
{
	std::string	str;

	if (nbcontacts == 0)
	{
		std::cout << "Phonebook empty." << std::endl;
		return ;
	}
	std::cout << "Index:";
	std::getline(std::cin, str);
	if (str.size() > 1 || !(str[0] >= 0 && str[0] - 48 < nbcontacts))
	{
		std::cout << "Wrong index." << std::endl;
		print_contact(nbcontacts);
	}
	else
		print_info(nbcontacts, str);
}

void	PhoneBook::search(int nbcontacts)
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
	print_contact(nbcontacts);

}			
