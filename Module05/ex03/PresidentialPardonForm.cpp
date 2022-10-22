#include "PresidentialPardonForm.hpp"
#include <ctime>
#include <cstdlib>
#include "Form.hpp"
#include <string>
#include <iostream>

		PresidentialPardonForm::PresidentialPardonForm(void): Form("PresidentialPardonForm", 25, 5), _target("default")
		{
			std::cout << "PresidentialPardonForm "
					<< getName()
					<< " created."
					<< std::endl;
		}

		PresidentialPardonForm::PresidentialPardonForm(const  PresidentialPardonForm& copy): Form(copy.getName(), copy.getToSign(), copy.getToExecute()), _target(copy.getTarget())
		{
			std::cout << "PresidentialPardonForm "
					<< getName()
					<< " copied."
					<< std::endl;
		}

		PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5), _target(target)
		{
			std::cout << "PresidentialPardonForm "
					<< getName()
					<< " created whith name."
					<< std::endl;
		}

		PresidentialPardonForm::~PresidentialPardonForm(void)
		{
			std::cout << "PresidentialPardonForm "
					<< getName()
					<< " destroyed."
					<< std::endl;
		}

std::string	PresidentialPardonForm::getTarget(void) const
		{
			return (this->_target);
		}

void		PresidentialPardonForm::execute(Bureaucrat const & executor) const
		{
			if (executor.getGrade() > this->getToExecute())
				throw Form::GradeTooLowException();
			if (this->getSign() == false)
				throw Form::FormNotSignedException();
			std::cout << getTarget()
					<< " has been forgiven by Zaphod Beeblebrox."
					<< std::endl;
		}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
		(void) src;
		std::cout << "Form has already const values." << std::endl;
		return (*this);
}
