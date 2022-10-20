#include "CanonClass.hpp"
#include <string>

		CanonClass::CanonClass(void): _name("John Doe")
		{
			std::cout << "CanonClass "
					<< getName()
					<< " created."
					<< std::endl;
		}

		CanonClass::CanonClass(const  CanonClass& copy)
		{
			*this = copy;
			std::cout << "CanonClass "
					<< getName()
					<< " copied."
					<< std::endl;
		}

		CanonClass::CanonClass(std::string name): _name(name)
		{
			std::cout << "CanonClass "
					<< getName()
					<< " created whith name."
					<< std::endl;
		}

		CanonClass::~CanonClass(void)
		{
			std::cout << "CanonClass "
					<< getName()
					<< " destroyed."
					<< std::endl;
		}

CanonClass&	CanonClass::operator=(CanonClass const &src)
{
	std::cout << "CanonClass equal to CanonClass." << std::endl;
	if (this == &src)
		return (*this);
	return (*this);
}

std::ostream  & operator<<(std::ostream & o, CanonClass const & i)
{
	return (o);
}
