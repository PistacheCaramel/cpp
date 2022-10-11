#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string>

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
			if (i = add_command(i, &phonebook, str, nbcontacts)
					== -1)
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
