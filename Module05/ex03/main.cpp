#include <string>
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include <iostream>

void	testunvalid(void)
{
	Form	*unvalid;
	Intern	WhatsHisNameAgain;
	bool	alloc = false;
	
	std::cout << "UNVALID:" << std::endl;
	try
	{
		unvalid = WhatsHisNameAgain.makeForm("unvalid name",
			"Unvalid target");
		alloc = true;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		if (alloc)
			delete unvalid;
		return ;
	}
	try
	{
		Bureaucrat Jaques("Jaques", 6);
		unvalid->beSigned(Jaques);
		unvalid->execute(Jaques);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	if (alloc)
		delete unvalid;
}

void	testppf(void)
{
	Intern	ImNotSureWeHiredThisGuy;
	Intern	OneMoreIntern(ImNotSureWeHiredThisGuy);
	Form	*ppf;
	bool	alloc = false;

	try
	{
		ppf = OneMoreIntern.makeForm("presidential pardon", "YourLogin");
		alloc = true;
		Bureaucrat Jaques("Jaques", 6);
		ppf->beSigned(Jaques);
		ppf->execute(Jaques);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	if (alloc)
		delete ppf;
}
void	testrrf(void)
{
	Intern	random;
	Intern	AnotherRandom = random;
	Form	*rrf;
	bool	alloc = false;

	try
	{
		rrf = random.makeForm("robotomy request", "ccottin");
		alloc = true;
		Bureaucrat Georges("Georges", 45);
		rrf->beSigned(Georges);
		rrf->execute(Georges);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	if (alloc)
		delete rrf;
}

void	testscf(void)
{
	Intern	random;
	Form	*scf;
	bool	alloc = false;

	try
	{
		scf = random.makeForm("shrubbery creation", "spacialVoid");
		alloc = true;
		Bureaucrat Jean("Jean", 137);
		scf->beSigned(Jean);
		scf->execute(Jean);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	if (alloc)
		delete scf;
}

int	main(void)
{
	{
		Intern someRandomIntern;
		Form* rrf;
		bool	success = false;
		try
		{
			rrf = someRandomIntern.makeForm("robotomy request",
				"Bender");
			success = true;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		if (success)
			delete rrf;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	testscf();
	std::cout << std::endl;
	std::cout << std::endl;
	testrrf();
	std::cout << std::endl;
	std::cout << std::endl;
	testppf();
	std::cout << std::endl;
	std::cout << std::endl;
	testunvalid();
	return (0);
}
