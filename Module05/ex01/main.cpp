#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>
#include <iostream>
void	ft_sign(void)
{
	std::cout << "Test sign:" << std::endl;
	Form		a("A40", 40, 2);
	std::cout << std::endl;
	Bureaucrat	b("Martin", 40);
	std::cout << std::endl;
       	Bureaucrat	c("Loic" , 39);
	std::cout << std::endl;
	Bureaucrat	d("Alain", 41);	
	std::cout << std::endl;

	std::cout << "Test function signForm:" << std::endl;
	std::cout << "Test Bureaucrat 41 on a Form 40:" << std::endl;
	d.signForm(a);
	std::cout << a << std::endl << std::endl;
	std::cout << "Test Bureaucrat 39 on a Form 40:" << std::endl;
	c.signForm(a);
	std::cout << a << std::endl << std::endl;
	std::cout << "Test Bureaucrat 40 on a Form 40:" << std::endl;
	b.signForm(a);	
	std::cout << a << std::endl << std::endl;
	std::cout << "Test function beSigned:" << std::endl;
	Form	e("A39", 39, 9);
	std::cout << "Test Form 39 with a Bureaucrat 40" << std::endl;
	try
	{
		e.beSigned(b);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << e << std::endl << std::endl;
	std::cout << "Test Form 39 with a Bureaucrat 41" << std::endl;
	try
	{
		e.beSigned(d);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << e << std::endl << std::endl;
	std::cout << "Test Form 39 with a Bureaucrat 39" << std::endl;
	try
	{
		e.beSigned(c);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << e << std::endl << std::endl;
	std::cout << "Test with inc and dec:" << std::endl;
	Form	f("A38", 38, 6);
	std::cout << "Inc:" << std::endl;
	std::cout << c << std::endl;
	c.inc();
	std::cout << c << std::endl;
	try
	{
		f.beSigned(c);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << f << std::endl << std::endl; 
	Form	g("A40", 40, 7);
	std::cout << "Dec:" << std::endl;
	std::cout << b << std::endl;
	b.dec();
	std::cout << b << std::endl;
	b.signForm(g);
}
	
void	ft_operator(void)
{
	Form a;
	std::cout << std::endl;
	Form b("Other form", 5, 6);
	std::cout << std::endl;

	std::cout << "Test operator '<<' on a Form:" << std::endl;
	std::cout << a << std::endl << std::endl;
	std::cout << "Test operator '=' on a Form:" << std::endl;
	a = b;
	std::cout << a << std::endl << std::endl;
	std::cout << "Test operator '<<' on a Bureaucrat:" << std::endl;
	Bureaucrat c;
	std::cout << std::endl;
	std::cout << c << std::endl << std::endl;
	std::cout << "Test operator '=' on a Bureaucrat:" << std::endl;
	Bureaucrat d("Marcus", 78);
	std::cout << std::endl;
	c = d;
	std::cout << c << std::endl << std::endl;
}

void	ft_instance(void)
{
	std::cout << "Tests instantiate Form with grades error in try/catch:" << std::endl;
	std::cout << "Test with to_sign(0):" << std::endl;
	try
	{
		Form a("One form", 0, 10);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Test with to_execute(151):" << std::endl;
	try
	{
		Form b("One Form", 10, 151);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Test with to_sign(2147483647):" << std::endl;
	try
	{
		Form c("One Form", 2147483647, 5);
	}
	catch (std::exception &e)
	{
		std::cout <<e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Test with to_execute(-2147483648):" << std::endl;
	try
	{
		Form d("One Form", 10, -2147483648);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Test with default constructor:" << std::endl;
	try
	{
		Form	e;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Test with to_sign(150) and to_execute(1)" << std::endl;
	try
	{
		Form	f("One Form", 150, 1);
	}
	catch (std::exception &e)
	{
		std::cout<< e.what() << std::endl;
	}
	std::cout << std::endl;
}

int	main()
{
	ft_instance();
	ft_operator();
	ft_sign();
	return (0);
}
