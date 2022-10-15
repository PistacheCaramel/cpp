#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string>

std::string	get_stream(void)
{
	std::string	str;

	while (str.size() == 0)
	{
		if (std::getline(std::cin, str).eof())
		{
			std::cout << "EOF reached" << std::endl;
			return (str);
		}
	}
	return (str);
}

int	add_command(int i, PhoneBook *phonebook, std::string str, int nbcontacts)
{
	if (nbcontacts == 8)
	{
		std::cout << "Replace contact index "
				<< i << "?(yes/no):";
		while (str.compare("yes") && str.compare("no"))
		{
			if (!(str = get_stream()).size())
				return (-1);
		}
	}
	if (str.compare("no"))
	{
		if ((*phonebook).get_contacts()[i].add_contact() == 1)
			return (-1);
		i++;
	}
	return (i);
}

int	main(int ac, char **av)
{
	PhoneBook	phonebook;
	std::string	str;
	int		i;
	int		nbcontacts;

	i = 0;
	nbcontacts = 0;
	while (str.compare("EXIT"))
	{
		std::cout << "Please enter a command: ADD/SEARCH/EXIT."
				<< std::endl;
		if (!(str = get_stream()).size())
			return (1);
		if (str.compare("ADD") == 0)
		{
			i = add_command(i, &phonebook, str, nbcontacts);
			if (i == -1)
				return (1);
			if (nbcontacts < i)
				nbcontacts = i;
		}
		if (str.compare("SEARCH") == 0)
		{
			if (phonebook.search(nbcontacts))
				return (1);
		}
		if (i == 8)
			i = 0;
	}
	return (0);
}
