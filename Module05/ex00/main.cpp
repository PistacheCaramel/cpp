#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>

void	ft_instance(void)
{
	Bureaucrat a;
	std::cout << "Test instance made with default constructor:" << std::endl;
	std::cout << a << std::endl;
	try
	{
		a.dec();
		std::cout << a << std::endl;
		a.inc();
		std::cout << a << std::endl;
		a.inc();
		std::cout << a << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << a << std::endl;
	std::cout << std::endl;
	std::cout << "Test intantiation with a grade to high (0) in a try/catch:" << std::endl;
	try
	{
		Bureaucrat b("Morgan", 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Test instantiation with int max grad in a try/catch:" << std::endl;
	try
	{
		Bureaucrat d("Don't work", 2147483647);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Test instantiation with int min grad in a try/catch:" << std::endl;
	try
	{
		Bureaucrat d("Don't work", -2147483648);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	//std::cout << "Test instantiation with a grade too low (151) without try/catch" << std::endl;
	//Bureaucrat c("Dont do that", 151);
}

int	main()
{
	Bureaucrat a("John", 1);
	Bureaucrat b("Martin", 150);

	std::cout << "Test inc on grade 1:" << std::endl;
	try
	{
		
		a.inc();
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << a << std::endl;
	std::cout << std::endl << "Test dec on grade 150" << std::endl;
	try
	{
		b.dec();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << b << std::endl;
	std::cout << std::endl;
	ft_instance();
	return (0);
}
