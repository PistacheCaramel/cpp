#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

/*	this test battery is good to go for all forms type, just	*/
/*	change every occurences to another							*/

void	test2(void)
{
	Bureaucrat	a = Bureaucrat();
	std::cout << std::endl;
	Bureaucrat	b("Jean", 42);
	std::cout << std::endl;
	Bureaucrat	c("Jaques", 1);
	std::cout << std::endl;

	ShrubberyCreationForm	aa;
	
	std::cout << aa << std::endl;
	
	std::cout << a.getName() << " try to sign form "
	<< aa.getName() << std::endl;
	a.signForm(aa);
		
	std::cout << b.getName() << " try to sign form "
	<< aa.getName() << std::endl;
	b.signForm(aa);
	
	std::cout << c.getName() << " try to sign form "
	<< aa.getName() << std::endl;
	c.signForm(aa);
	
	std::cout << std::endl;
	std::cout << aa << std::endl;
		
	std::cout << a.getName() << " try to execute form "
	<< aa.getName() << std::endl;
	a.executeForm(aa);
	
	std::cout << b.getName() << " try to execute form "
	<< aa.getName() << std::endl;
	b.executeForm(aa);
		
	std::cout << c.getName() << " try to execute form "
	<< aa.getName() << std::endl;
	c.executeForm(aa);
}

void	test1(void)
{
	Bureaucrat	a = Bureaucrat();
	std::cout << std::endl;
	Bureaucrat	b("Jean", 42);
	std::cout << std::endl;
	Bureaucrat	c("Jaques", 1);
	std::cout << std::endl;

	ShrubberyCreationForm	aa("Eden");
	std::cout << std::endl;
	
	std::cout << aa << std::endl;
	
	try
	{
		std::cout << a.getName() << " try to sign form "
		<< aa.getName() << std::endl;
		aa.beSigned(a);
		std::cout << "Success!" << std::endl;
		
	}
	catch (std::exception &e)
	{
		
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << b.getName() << " try to sign form "
		<< aa.getName() << std::endl;
		aa.beSigned(b);
		std::cout << "Success!" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << c.getName() << " try to sign form "
		<< aa.getName() << std::endl;
		aa.beSigned(c);
		std::cout << "Success!" << std::endl;
	}	
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << aa << std::endl;
	std::cout << std::endl;
	try
	{
		std::cout << a.getName() << " try to execute form "
		<< aa.getName() << std::endl;
		aa.execute(a);
		std::cout << "Success!" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << b.getName() << " try to execute form "
		<< aa.getName() << std::endl;
		aa.execute(b);
		std::cout << "Success!" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << c.getName() << " try to execute form "
		<< aa.getName() << std::endl;
		aa.execute(c);
		std::cout << "Success!" << std::endl;
	}	
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}

int	main(void)
{
	{

		Bureaucrat a("Bureacrat", 142);
		std::cout << std::endl;
		ShrubberyCreationForm casic("cible");
		std::cout << std::endl;
		try
		{
			casic.execute(a);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		a.executeForm(casic);
	}
	std::cout << std::endl;
	std::cout << std::endl;
	test1();
	std::cout << std::endl;
	std::cout << "Now testing with Bureaucrats'"
	" functions" << std::endl;
	test2();
	std::cout << std::endl;
	return (0);
}
