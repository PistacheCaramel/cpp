/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:26:06 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/26 17:26:08 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <exception>


void	empty_container(void)
{	
	std::vector<int> integer;

	try
	{
		std::cout << *easyfind(integer, 58865) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

int main()
{
	std::vector<int> integer;

	integer.push_back(45);
	integer.push_back(27);
	integer.push_back(65);
	integer.push_back(1245);
	integer.push_back(58865);
	integer.push_back(65);
	integer.push_back(73);
	integer.push_back(1);
	integer.push_back(-2145);
	integer.push_back(89);
	integer.push_back(659);
	try
	{
		std::cout << *easyfind(integer, 58865) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << *easyfind(integer, 0) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	empty_container();
	return (0);
}
	
