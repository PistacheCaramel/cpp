#include <string>
#include <iostream>

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
