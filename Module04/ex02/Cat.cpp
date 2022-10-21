/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:03:47 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/21 02:37:34 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <string>
#include <iostream>

		Cat::Cat(void): Animal("Cat"), _brain(new Brain)
		{
			std::cout << "Cat "
					<< getType()
					<< " created."
					<< std::endl;
		}

		Cat::Cat(const  Cat& copy): Animal(copy.getType())
		{
			*this = copy;
			std::cout << "Cat "
					<< getType()
					<< " copied."
					<< std::endl;
		}

		Cat::~Cat(void)
		{
			delete this->_brain;
			std::cout << "Cat "
					<< getType()
					<< " destroyed."
					<< std::endl;
		}

std::string	Cat::getIdeas(int index) const
{
		return (this->_brain->getIdeas(index));
}

void		Cat::makeSound(void) const
		{
			std::cout << "Cat sound."
					<< std::endl;
		}

Cat&		Cat::operator=(Cat const &src)
		{
			int	i;

			i = 0;
			std::cout << "Cat equal to Cat." << std::endl;
			if (this == &src)
				return (*this);
			delete this->_brain;
			this->_brain = new Brain;
			while (i < 100)
			{
				this->_brain->setIdeas(i, src._brain->getIdeas(i));
				i++;
			}
			setType(src.getType());
			return (*this);

		}
