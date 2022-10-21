/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:27:50 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/21 03:49:43 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <string>
#include <iostream>

		WrongCat::WrongCat(void): WrongAnimal("Cat")
		{
			std::cout << "WrongCat "
					<< getType()
					<< " created."
					<< std::endl;
		}

		WrongCat::WrongCat(const  WrongCat& copy) : WrongAnimal(copy.getType())
		{
			*this = copy;
			std::cout << "WrongCat "
					<< getType()
					<< " copied."
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
