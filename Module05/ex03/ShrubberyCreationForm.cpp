#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include <string>
#include <iostream>
#include <fstream>

		ShrubberyCreationForm::ShrubberyCreationForm(void): Form("ShrubberyCreationForm", 145, 137), _target("default")
		{
			std::cout << "ShrubberyCreationForm "
					<< getName()
					<< " created."
					<< std::endl;
		}

		ShrubberyCreationForm::ShrubberyCreationForm(const  ShrubberyCreationForm& copy): Form(copy.getName(), copy.getToSign(), copy.getToExecute()), _target(copy.getTarget())
		{
			std::cout << "ShrubberyCreationForm "
					<< getName()
					<< " copied."
					<< std::endl;
		}

		ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137), _target(target)
		{
			std::cout << "ShrubberyCreationForm "
					<< getName()
					<< " created whith name."
					<< std::endl;
		}

		ShrubberyCreationForm::~ShrubberyCreationForm(void)
		{
			std::cout << "ShrubberyCreationForm "
					<< getName()
					<< " destroyed."
					<< std::endl;
		}

std::string	ShrubberyCreationForm::getTarget(void) const
		{
			return (this->_target);
		}

void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const
		{
			std::fstream	fs;
			std::string	str = "_shrubbery";

			if (executor.getGrade() > this->getToExecute())
				throw Form::GradeTooLowException();
			if (getSign() == false)
				throw Form::FormNotSignedException();
			try
			{
				fs.open((getTarget() + str).c_str(), std::fstream::out | std::fstream::trunc);
			fs.write("\n                    / / /\n"
"                   /        /  /     / /   /\n"
"                /                 /         /  /\n"
"                                /\n"
"                               /               / /\n"
"               /          /            /              /\n"
"               /            '/,        /               /\n"
"               /              'b      *\n"
"                /              '$    / /              / /\n"
"               /    /           $:   /:               /\n"
"            / /      / / /      * /  @):       /   / /\n"
"                          /     :@,@):   ,/**:'   /\n"
"              /      /,         :@@*: / /**'     /   /\n"
"                       '/o/    /:(@'/@**'''  /\n"
"               /  /       'bq, /:,@@*'   ,*      /  /\n"
"                          ,p$q8,:@)'  /p*'      /\n"
"                   /     '  / '@@Pp@@*'    /  /\n"
"                    /  / / /   Y7'.'     /  /\n"
"                              :@):.\n"
"                             .:@:'.\n"
"                           .::(@:. \n"
"                         .::::(@:. \n", 1024);
                     	fs.close();
			}
			catch (std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
		}
ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
		(void) src;
		std::cout << "Form has already const values." << std::endl;
		return (*this);
}
