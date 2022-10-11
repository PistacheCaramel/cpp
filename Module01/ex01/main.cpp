#include <iostream>
#include "Zombie.hpp"

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

int	main()
{
	Zombie		*zombie;
	int		i;
	std::string	str;

	std::cout << "Enter a zombie number for zombieHorde:";
	zombie = zombieHorde(100, get_stream());
	i = 0;
	while (i < 100)
	{
		zombie[i].announce();
		i++;
	}
	delete[] zombie;
	return (0);
}
