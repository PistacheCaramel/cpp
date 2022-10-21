/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:29:30 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/20 20:29:31 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <string>
#include <iostream>
		WrongAnimal::WrongAnimal(void): type("Unknown")
		{
			std::cout << "WrongAnimal "
					<< getType()
					<< " created."
					<< std::endl;
		}

		WrongAnimal::WrongAnimal(const  WrongAnimal& copy)
		{
			*this = copy;
			std::cout << "WrongAnimal "
					<< getType()
					<< " copied."
					<< std::endl;
		}

		WrongAnimal::WrongAnimal(std::string type): type(type)
		{
			std::cout << "WrongAnimal "
					<< getType()
					<< " created whith type."
					<< std::endl;
		}

		WrongAnimal::~WrongAnimal(void)
		{
			std::cout << "WrongAnimal "
					<< getType()
					<< " destroyed."
					<< std::endl;
		}

std::string	WrongAnimal::getType(void) const
		{
			return (this->type);
		}

void		WrongAnimal::setType(const std::string type)
		{
			this->type = type;
		}

void		WrongAnimal::makeSound(void) const
		{
			std::cout << "WrongAnimal sound."
					<< std::endl;
		}

WrongAnimal&		WrongAnimal::operator=(WrongAnimal const &src)
		{
			std::cout << "WrongAnimal equal to WrongAnimal." << std::endl;
			if (this == &src)
				return (*this);
			setType(src.getType());
			return (*this);
		}

std::ostream  & operator<<(std::ostream & o, WrongAnimal const & i)
{
	o << i.getType();
	return (o);
}
