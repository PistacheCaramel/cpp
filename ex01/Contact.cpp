#include "Contact.hpp"
#include <iostream>
#include <string>
#include <cstddef>

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
	return;
}

void	Contact::add_contact(void)
{	
	std::size_t found;

	std::cout << "First Name:";
	std::getline(std::cin, this->first_name);
	std::cout << "Last Name:";
	std::getline(std::cin, this->last_name);
	std::cout << "Nickname:";
	std::getline(std::cin, this->nickname);
	std::cout << "Phone Number:";
	std::getline(std::cin, this->phone_number);
	while (this->phone_number.find_first_not_of("0123456789") != std::string::npos)
	{
		std::cout << "Please enter a correct number." << std::endl;
		std::getline(std::cin, this->phone_number);
	}
	std::cout << "Darkest Secret:";
	std::getline(std::cin, this->darkest_secret);
}
