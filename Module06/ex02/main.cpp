/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:55:19 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/24 12:55:21 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"
#include "A.hpp"
#include "Base.hpp"
#include "C.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

Base *	generate(void)
{
	int	i;

	srand(time(NULL));
	i = rand() % 3;
	if (i  == 0)
	{	std::cout << "Type A." << std::endl;
		return (new A);
	}
	if (i == 1)
	{
		std::cout << "Type B." << std::endl;
		return (new B);
	}
	if (i == 2)
	{
		std::cout << "Type C." << std::endl;
		return (new C);
	}
	return (new Base);
}

void	identify(Base* p)
{
	A*	a;
	B*	b;
	C*	c;

	a = dynamic_cast<A*>(p);
	b = dynamic_cast<B*>(p);
	c = dynamic_cast<C*>(p);

	if (a != NULL)
		std::cout << "Type is A." << std::endl;
	if (b != NULL)
		std::cout << "Type is B." << std::endl;
	if (c != NULL)
		std::cout << "Type is C." << std::endl;
}

void	identify(Base &p)
{

	try
	{
		A&	a = dynamic_cast<A&>(p);
			(void)a;
			std::cout << "Type is A." << std::endl;
	}
	catch (std::exception &e)
	{

	}
	try
	{
		B&	b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "Type is B." << std::endl;
	}
	catch (std::exception &e)
	{

	}
	try
	{
		C	&c = dynamic_cast<C&>(p);
			(void)c;
			std::cout << "Type is C." << std::endl;
	}
	catch (std::exception &e)
	{
	
	}
}


int	main()
{

	Base	*p;


	p = generate();
	identify(p);
	identify(*p);
	delete p;
}
