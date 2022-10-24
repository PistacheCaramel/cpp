/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:52:45 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/24 12:52:55 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include "Convert.hpp"

int	main(int ac, char **av)
{
	Convert	convert;

	if (ac != 2)
	{
		std::cout << "Wrong number of arguments." << std::endl;
		return (0);
	}

	if (av[1][0] == 0)
	{
		std::cout << "Empty string." << std::endl;
		return (0);
	}
	convert.setInput(av[1]);
	if (convert.isChar() == true)
		convert.convertChar();
	if (convert.isInt() == true)
		convert.convertInt();
	if (convert.isFloat() == true)
		convert.convertFloat();
	if (convert.isDouble() == true)
		convert.convertDouble();
	std::cout << convert;

	return (0);
}
