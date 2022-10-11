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

	std::cout << "Enter a zombie name for newZombie:";
	zombie = newZombie(get_stream());
	zombie->announce();
	delete zombie;
	std::cout << "Enter a zombie name for randomChump:";
	randomChump(get_stream());
	return (0);
}
