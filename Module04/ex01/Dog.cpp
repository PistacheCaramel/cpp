#include "Dog.hpp"
#include <string>
#include <iostream>

		Dog::Dog(void): Animal("Unknown")
		{
			std::cout << "Dog "
					<< getType()
					<< " created."
					<< std::endl;
		}

		Dog::Dog(const  Dog& copy)
		{
			*this = copy;
			std::cout << "Dog "
					<< getType()
					<< " copied."
					<< std::endl;
		}

		Dog::Dog(std::string type): Animal(type)
		{
			std::cout << "Dog "
					<< getType()
					<< " created whith type."
					<< std::endl;
		}

		Dog::~Dog(void)
		{
			std::cout << "Dog "
					<< getType()
					<< " destroyed."
					<< std::endl;
		}

void		Dog::makeSound(void) const
		{
			std::cout << "Dog sound."
					<< std::endl;
		}

Dog&		Dog::operator=(Dog const &src)
		{
			std::cout << "Dog equal to Dog." << std::endl;
			if (this == &src)
				return (*this);
			setType(src.getType());
			return (*this);
		}
