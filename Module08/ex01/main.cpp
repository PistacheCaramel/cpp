/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:26:41 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/26 17:26:46 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"
#include <cstdlib>
#include <iostream>
#include <vector>
#include <exception>
#include	<ctime>

void	mandatory(void)
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

int main()
{
	Span	a(50);
	int	i;
	std::vector<int>::iterator	it;
	Span b;

	i = 0;

	std::cout << "MANDATORY" << std::endl;
	mandatory();
	std::cout << "END MANDATORY" << std::endl;
//	b.longestSpan();
	while (i < 25)
	{
		a.addNumber(rand() % 1000);
		i++;
	}
	it = a.getStorage().begin();
	while (it != a.getStorage().end())
	{
		std::cout << *it << std::endl;
		it++;
	}
	std::cout << std::endl;
	a.setRangeToAdd(25);
	it = a.getStorage().begin();
	while (it != a.getStorage().end())
	{
		std::cout << *it << std::endl;
		it++;
	}
	std::cout << "max span is " << a.longestSpan() << " and min is " << a.shortestSpan() << std::endl;
	return (0);
}
	
