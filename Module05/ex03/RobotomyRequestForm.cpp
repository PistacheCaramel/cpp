#include "RobotomyRequestForm.hpp"
#include <ctime>
#include <cstdlib>
#include "Form.hpp"
#include <string>
#include <iostream>

		RobotomyRequestForm::RobotomyRequestForm(void): Form("RobotomyRequestForm", 72, 45), _target("default")
		{
			std::cout << "RobotomyRequestForm "
					<< getName()
					<< " created."
					<< std::endl;
		}

		RobotomyRequestForm::RobotomyRequestForm(const  RobotomyRequestForm& copy): Form(copy.getName(), copy.getToSign(), copy.getToExecute()), _target(copy.getTarget())
		{
			std::cout << "RobotomyRequestForm "
					<< getName()
					<< " copied."
					<< std::endl;
		}

		RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45), _target(target)
		{
			std::cout << "RobotomyRequestForm "
					<< getName()
					<< " created whith name."
					<< std::endl;
		}

		RobotomyRequestForm::~RobotomyRequestForm(void)
		{
			std::cout << "RobotomyRequestForm "
					<< getName()
					<< " destroyed."
					<< std::endl;
		}

std::string	RobotomyRequestForm::getTarget(void) const
		{
			return (this->_target);
		}

void		RobotomyRequestForm::execute(Bureaucrat const & executor) const
		{
			if (executor.getGrade() > this->getToExecute())
				throw Form::GradeTooLowException();
			if (this->getSign() == false)
				throw Form::FormNotSignedException();
			std::cout << "*Drill Noises*" << std::endl;
			srand(time(NULL));
			if (rand() % 2 + 1 == 1)
			{
				std::cout << getTarget()
						<< " has been succesfully robotomized."
						<< std::endl;
			}
			else
			{
				std::cout << "The operation failed." << std::endl;
			}
		}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
		(void) src;
		std::cout << "Form has already const values." << std::endl;
		return (*this);
}
