#include "Cat.hpp"
#include <string>
#include <iostream>

		Cat::Cat(void): Animal("Unknown")
		{
			std::cout << "Cat "
					<< getType()
					<< " created."
					<< std::endl;
		}

		Cat::Cat(const  Cat& copy)
		{
			*this = copy;
			std::cout << "Cat "
					<< getType()
					<< " copied."
					<< std::endl;
		}

		Cat::Cat(std::string type): Animal(type)
		{
			std::cout << "Cat "
					<< getType()
					<< " created whith type."
					<< std::endl;
		}

		Cat::~Cat(void)
		{
			std::cout << "Cat "
					<< getType()
					<< " destroyed."
					<< std::endl;
		}

void		Cat::makeSound(void) const
		{
			std::cout << "Cat sound."
					<< std::endl;
		}

Cat&		Cat::operator=(Cat const &src)
		{
			std::cout << "Cat equal to Cat." << std::endl;
			if (this == &src)
				return (*this);
			setType(src.getType());
			return (*this);
		}
