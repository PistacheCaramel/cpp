#include <string>
#include <iostream>
#include <cstdlib>
#include "Convert.hpp"

int	main(int ac, char **av)
{
	Convert	convert;

	if (ac != 2)
	{
		std::cout << "Wrong number of arguments." << std::endl;
		return (0);
	}

	if (av[1][0] == 0)
	{
		std::cout << "Empty string." << std::endl;
		return (0);
	}
	convert.setInput(av[1]);
	if (convert.isChar() == true)
		std::cout << "is char" << std::endl;
	if (convert.isInt() == true)
	{
		convert.convert_int();
		std::cout << convert << std::endl;
	}
	if (convert.isFloat() == true)
	{
		convert.convert_float();
		std::cout << convert << std::endl;
	}
		std::cout << "is Float" << std::endl;
	if (convert.isDouble() == true)
		std::cout << "is Double" << std::endl;
	//to_convert = av[1];

	return (0);
}
