/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:28:59 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/21 02:33:03 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <string>
#include <iostream>

		Cat::Cat(void): Animal("Cat")
		{
			std::cout << "Cat "
					<< getType()
					<< " created."
					<< std::endl;
		}

		Cat::Cat(const  Cat& copy) : Animal(copy.type)
		{
			*this = copy;
			std::cout << "Cat "
					<< getType()
					<< " copied."
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
