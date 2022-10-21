/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:27:10 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/21 03:52:05 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void	ft_more_test(void)
{
	std::cout << "More tests:" << std::endl;
	const Animal * A = new Animal("Bird");
	std::cout << A->getType() << std::endl;;
	A->makeSound();
	const Cat * B = new Cat();
	std::cout << B->getType() << std::endl;;
	B->makeSound();
	const Animal * C = B;
	C->makeSound();
	delete A;
	delete B;
}

int	main(void)
{
	{
		std::cout << "Mandatory tests:" << std::endl;
		std::cout << "With Animal:" << std::endl;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << meta->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		meta->makeSound();
		i->makeSound(); //will output the cat sound!
		j->makeSound();
	
		delete meta;
		delete j;
		delete i;
	}
	std::cout << std::endl;
	{
		std::cout << "With WrongAnimal:" << std::endl;
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* j = new WrongCat();
		const WrongCat* i = new WrongCat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		meta->makeSound(); //will output Animal sound!
		j->makeSound(); //will output Animal sound!
		i->makeSound(); //will output Cat sound!
		
		delete meta;
		delete j;
		delete i;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	ft_more_test();
	return 0;
}
