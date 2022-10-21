/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:03:39 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/21 01:31:43 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <string>
#include <iostream>

		Brain::Brain(void)
		{
			int	i;

			i  = 0;
			while (i < 100)
			{
				this->_ideas[i] = "idea";
				i++;
			}
			std::cout << "Brain "
					<< " created."
					<< std::endl;
		}

		Brain::Brain(const  Brain& copy)
		{
			*this = copy;
			std::cout << "Brain "
					<< " copied."
					<< std::endl;
		}

		Brain::~Brain(void)
		{
			std::cout << "Brain "
					<< " destroyed."
					<< std::endl;
		}

Brain&		Brain::operator=(Brain const &src)
		{
			int	i;

			i = 0;
			std::cout << "Brain equal to Brain." << std::endl;
			if (this == &src)
				return (*this);
			while (i < 100)
			{
				this->_ideas[i] = src.getIdeas(i);
				i++;
			}
			return (*this);
		}

std::string	Brain::getIdeas(int index) const
		{
			std::string	ret;

			if (index >= 0 && index < 100)
				return (this->_ideas[index]);
			else
			{
				std::cout << "There is only 100 ideas in that brain." << std::endl;
				return (ret);
			}
		}

void		Brain::setIdeas(int index, std::string idea)
		{
			if (index >= 0 && index < 100)
				this->_ideas[index] = idea;
			else
				std::cout << "There is only the place for 100 string in that brain" << std::endl;
		}

std::ostream  & operator<<(std::ostream & o, Brain const & i)
		{
			int	b;

			b = 0;
			while (b < 100)
			{
				o << i.getIdeas(b) << std::endl;
				b++;
			}
			return (o);
		}
