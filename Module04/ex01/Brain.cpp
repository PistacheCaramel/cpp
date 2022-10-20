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
			return (this->_ideas[index]);
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
