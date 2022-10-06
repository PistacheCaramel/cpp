#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main(int ac, char **av)
{
	PhoneBook	phonebook;
	std::string	str;
	int		i;
	int		nbcontacts;

	i = 0;
	nbcontacts = 0;
	while (str.compare("EXIT"))
	{
		std::getline(std::cin, str);
		if (str.compare("ADD") == 0)
		{
			phonebook.contacts[i].add_contact();
			i++;
			if (nbcontacts < i)
				nbcontacts = i;
		}
		if (str.compare("SEARCH") == 0)
		{
			phonebook.search(nbcontacts);
		}
		if (i == 8)
			i = 0;
	}
	return (0);
}
