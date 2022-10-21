/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:31:30 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/21 03:41:17 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void	ft_mandatory(void)
{
	Animal	*tab[8];
	int	i;

	i = 0;
	while (i < 4)
	{
		tab[i] = new Dog();
		std::cout << std::endl;
		i++;
	}
	while (i < 8)
	{
		tab[i] = new Cat();
		std::cout << std::endl;
		i++;
	}
	tab[0]->makeSound();
	tab[4]->makeSound();
	i = 0;
	while (i < 8)
	{
		delete tab[i];
		std::cout << std::endl;
		i++;
	}	
}

int	main(void)
{
	{	
		const Animal* j = new Dog();
		std::cout << std::endl;
		const Animal* i = new Cat();
		std::cout << std::endl;
//		Animal	test;       Not Working anymore

		delete j;
		std::cout << std::endl;
		delete i;
		std::cout << std::endl;
		j = new Dog();
		std::cout << std::endl;
		i = new Cat();
		std::cout << std::endl;
		delete j;
		std::cout << std::endl;
		delete i;

		std::cout << std::endl;

		const Dog* h = new Dog();
		std::cout << std::endl;
		const Cat* g(new Cat());
		std::cout << std::endl;

		h->makeSound();
		std::cout << h->getType() << std::endl;
		std::cout << h->getIdeas(42) << std::endl;
		g->makeSound();
		std::cout << g->getType() << std::endl;
		std::cout << g->getIdeas(58) << std::endl;

		delete h;
		std::cout << std::endl;
		delete g;
		std::cout << std::endl;
	}
	
	std::cout <<  std::endl;
	std::cout <<  std::endl;
	//ft_mandatory();
	std::cout <<  std::endl;
	std::cout <<  std::endl;
	
	return 0;
}
