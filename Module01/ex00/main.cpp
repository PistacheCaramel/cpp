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
	std::string	str;

	zombie = newZombie("Plop");
	zombie->announce();
	delete zombie;
	randomChump("DayWalker");
	return (0);
}
