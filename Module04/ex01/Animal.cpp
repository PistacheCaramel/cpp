#include "Animal.hpp"
#include <string>
#include <iostream>
		Animal::Animal(void): type("Unknown")
		{
			std::cout << "Animal "
					<< getType()
					<< " created."
					<< std::endl;
		}

		Animal::Animal(const  Animal& copy)
		{
			*this = copy;
			std::cout << "Animal "
					<< getType()
					<< " copied."
					<< std::endl;
		}

		Animal::Animal(std::string type): type(type)
		{
			std::cout << "Animal "
					<< getType()
					<< " created whith type."
					<< std::endl;
		}

		Animal::~Animal(void)
		{
			std::cout << "Animal "
					<< getType()
					<< " destroyed."
					<< std::endl;
		}

std::string	Animal::getType(void) const
		{
			return (this->type);
		}

void		Animal::setType(const std::string type)
		{
			this->type = type;
		}

void		Animal::makeSound(void) const
		{
			std::cout << "Animal sound."
					<< std::endl;
		}

Animal&		Animal::operator=(Animal const &src)
		{
			std::cout << "Animal equal to Animal." << std::endl;
			if (this == &src)
				return (*this);
			setType(src.getType());
			return (*this);
		}

std::ostream  & operator<<(std::ostream & o, Animal const & i)
{
	o << i.getType();
	return (o);
}
