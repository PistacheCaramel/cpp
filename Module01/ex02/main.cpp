#include <string>
#include <iostream>

int	main()
{
	std::string	str;
	std::string	*ptr;
	str::string	&ref;

	str = "HI THIS IS BRAIN";
	ref = str;
	ptr = ref;
	std::cout << &str << std::endl;
	std::cout << ptr << std::endl;
	std::cout << ref << std::endl;
	std::cout << str << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
	return (0);
}
