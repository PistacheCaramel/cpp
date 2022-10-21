/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:03:18 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/21 03:29:09 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void	ft_mandatory(void)
{
	std::cout << "Mandatory Test" << std::endl;
	Animal	*tab[8];
	int	i;

	i = 0;
	while (i < 4)
	{
		tab[i] = new Dog();
		std::cout <<  std::endl;
		i++;
	}
	while (i < 8)
	{
		tab[i] = new Cat();
		std::cout <<  std::endl;
		i++;
	}
	tab[0]->makeSound();
	tab[4]->makeSound();
	i = 0;
	while (i < 8)
	{
		delete tab[i];	
		std::cout <<  std::endl;
		i++;
	}
	std::cout <<  std::endl;
	 Dog* h = new Dog();
        Cat* g(new Cat());

        std::cout << h->getType() << std::endl;
        h->makeSound();
        std::cout << h->getIdeas(42) << std::endl;
        std::cout <<  std::endl;
        std::cout << g->getType() << std::endl;
        g->makeSound();
        std::cout << g->getIdeas(42) << std::endl;

        std::cout <<  std::endl;
        delete h;
        std::cout <<  std::endl;
        delete g;
        std::cout <<  std::endl;
}

void	ft_brain(void)
{
	{
		Brain	brain;
	std::cout <<  std::endl;
		Brain	rebrain;
	std::cout <<  std::endl;
		Brain	another(rebrain);
	std::cout <<  std::endl;
		Brain	oneMore;
		oneMore = another;
	std::cout <<  std::endl;

		std::cout << "TEST BRAIN IDEAS INDEX:" << std::endl;
		std::cout << "Test with index 100:" << std::endl;
		std::cout << brain.getIdeas(100) << std::endl;
		std::cout << "Test with index 99:" << std::endl;
		std::cout << brain.getIdeas(99) << std::endl;
		std::cout << "Test with index -1:" << std::endl;
		std::cout << rebrain.getIdeas(-1) << std::endl;
		std::cout << "Test with index 1:" << std::endl;
		std::cout << rebrain.getIdeas(1) << std::endl;
		std::cout << "Test with index 2147483647:" << std::endl;
		std::cout << another.getIdeas(2147483647) << std::endl;
		std::cout << "Test with index 47:" << std::endl;
		std::cout << another.getIdeas(47) << std::endl;
		std::cout << "Test with index 5:" << std::endl;
		std::cout << oneMore.getIdeas(5) << std::endl;
		std::cout << "Test with index -4321:" << std::endl;
		std::cout << oneMore.getIdeas(-4321) <<  std::endl;
	}
}

void	ft_assign(void)
{
	std::cout << "Deep copy tests:" << std::endl;
	Cat	a;
	std::cout <<  std::endl;
	Dog	b;
	std::cout <<  std::endl;
	Dog	*c = new Dog;
	std::cout <<  std::endl;
	Cat	*d = new Cat;
	std::cout <<  std::endl;

	a = *d;
	b = *c;
	delete d;
	std::cout <<  std::endl;
	delete c;
	std::cout <<  std::endl;
	std::cout << "If no deep copy, nothing on the standard output:" << std::endl;
	std::cout << "Cat:" << a.getIdeas(0) << std::endl;
	std::cout << "Dog:" << b.getIdeas(0) << std::endl;
}

int	main(void)
{
	{	
		std::cout << "main example" <<  std::endl;
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		
		delete j;//should not create a leak
		delete i;

		std::cout <<  std::endl;
		std::cout << "Something else" << std::endl;

		const Dog* h = new Dog();
		const Cat* g(new Cat());

		h->makeSound();
		std::cout << h->getType() << std::endl;
		std::cout << h->getIdeas(80) << std::endl;
		g->makeSound();
		std::cout << g->getType() << std::endl;
		std::cout << g->getIdeas(80) << std::endl;

		delete h;
		delete g;
	}
	std::cout <<  std::endl;
	ft_brain();
	std::cout <<  std::endl;
	std::cout <<  std::endl;
	ft_assign();
	std::cout <<  std::endl;
	std::cout <<  std::endl;
	ft_mandatory();
	std::cout <<  std::endl;

	return 0;
}
