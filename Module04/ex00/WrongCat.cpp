#include "WrongCat.hpp"
#include <string>
#include <iostream>

		WrongCat::WrongCat(void): WrongAnimal("Unknown")
		{
			std::cout << "WrongCat "
					<< getType()
					<< " created."
					<< std::endl;
		}

		WrongCat::WrongCat(const  WrongCat& copy)
		{
			*this = copy;
			std::cout << "WrongCat "
					<< getType()
					<< " copied."
					<< std::endl;
		}

		WrongCat::WrongCat(std::string type): WrongAnimal(type)
		{
			std::cout << "WrongCat "
					<< getType()
					<< " created whith type."
					<< std::endl;
		}

		WrongCat::~WrongCat(void)
		{
			std::cout << "WrongCat "
					<< getType()
					<< " destroyed."
					<< std::endl;
		}

void		WrongCat::makeSound(void) const
		{
			std::cout << "WrongCat sound."
					<< std::endl;
		}

WrongCat&		WrongCat::operator=(WrongCat const &src)
		{
			std::cout << "WrongCat equal to WrongCat." << std::endl;
			if (this == &src)
				return (*this);
			setType(src.getType());
			return (*this);
		}
