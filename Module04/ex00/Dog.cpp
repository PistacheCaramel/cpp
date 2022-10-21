/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:29:09 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/21 02:33:43 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <string>
#include <iostream>

		Dog::Dog(void): Animal("Dog")
		{
			std::cout << "Dog "
					<< getType()
					<< " created."
					<< std::endl;
		}

		Dog::Dog(const  Dog& copy): Animal(copy.type)
		{
			*this = copy;
			std::cout << "Dog "
					<< getType()
					<< " copied."
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
