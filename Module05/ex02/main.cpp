#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include <exception>
#include <iostream>
int	main()
{
	ShrubberyCreationForm a;
	Bureaucrat		b("", 150);

	a.execute(b);
	return (0);
}
