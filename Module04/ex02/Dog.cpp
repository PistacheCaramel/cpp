/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:03:55 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/21 02:37:12 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <string>
#include <iostream>

		Dog::Dog(void): Animal("Dog"), _brain(new Brain)
		{
			std::cout << "Dog "
					<< getType()
					<< " created."
					<< std::endl;
		}

		Dog::Dog(const  Dog& copy): Animal(copy.getType())
		{
			*this = copy;
			std::cout << "Dog "
					<< getType()
					<< " copied."
					<< std::endl;
		}

		Dog::~Dog(void)
		{
			delete this->_brain;
			std::cout << "Dog "
					<< getType()
					<< " destroyed."
					<< std::endl;
		}

std::string	Dog::getIdeas(int index) const
		{
			return (this->_brain->getIdeas(index));
		}
void		Dog::makeSound(void) const
		{
			std::cout << "Dog sound."
					<< std::endl;
		}

Dog&		Dog::operator=(Dog const &src)
		{
			int	i;

			i = 0;
			std::cout << "Dog equal to Dog." << std::endl;
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
