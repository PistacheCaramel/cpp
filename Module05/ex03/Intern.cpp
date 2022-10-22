#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include <string>
#include <iostream>

		Intern::Intern(void)
		{
			std::cout << "Intern "
					<< " created."
					<< std::endl;
		}

		Intern::Intern(const  Intern& copy)
		{
			*this = copy;
			std::cout << "Intern "
					<< " copied."
					<< std::endl;
		}

		Intern::~Intern(void)
		{
			std::cout << "Intern "
					<< " destroyed."
					<< std::endl;
		}

Intern&		Intern::operator=(Intern const &src)
		{
			(void) src;
			std::cout << "Intern are all the same." << std::endl;
			return (*this);
		}

Form*		Intern::makeForm(std::string name, std::string target)
		{
			std::string	tab[3] = {"shrubbery creation", "presidential pardon", "robotomy request"};
			int		i;

			i  = 0;
			while (name.compare(tab[i]) && i < 3)
				i++;
			switch (i)
			{
				case 0:
					std::cout << "Intern creates " << name << std::endl;
					return (new ShrubberyCreationForm(target));
				case 1:
					std::cout << "Intern creates " << name << std::endl;
					return (new PresidentialPardonForm(target));
				case 2:
					std::cout << "Intern creates " << name << std::endl;
					return (new RobotomyRequestForm(target));
				default:
					std::cout << "Form " << name << " doesn't exist." << std::endl;
					return (NULL);
			}
}
