#include "Contact.hpp"
#include <iostream>
#include <string>

Contact::Contact(void)
{
	std::cout << "First Name:";
	std::cin >> this->first_name;
	std::cout << "Last Name:";
	std::cin >> this->last_name;
	std::cout << "Nickname:";
	std::cin >> this->nickname;
	std::cout << "Phone Number:";
	std::cin >> this->phone_number;
	std::cout << "Darkest Secret";
	std::cin >> this->darkest_secret;
}

Contact::~Contact(void)
{
	return;
}
