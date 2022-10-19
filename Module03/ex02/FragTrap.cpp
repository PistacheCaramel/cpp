/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:35:13 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/20 00:09:16 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <string>
#include <iostream>

FragTrap::FragTrap(void): ClapTrap("John Doe")
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap "
			<< getName()
			<< " has been created."
			<< std::endl;
}

FragTrap::FragTrap(const  FragTrap& copy): ClapTrap(copy.getName())
{
	*this = copy;
	std::cout << "FragTrap "
			<< getName()
			<< " has been copied."
			<< std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap "
			<< getName()
			<< " has been created with a name."
			<< std::endl;

}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap "
			<< getName()
			<< " disapeared like a FragTrap."
			<< std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const &src)
{
	std::cout << "FragTrap equal to Scavtrap"
			<< std::endl;
	if (this == &src)
		return (*this);
	this->_name = src.getName();
	this->_hit_points = src.getHitPoints();
	this->_energy_points = src.getEnergyPoints();
	this->_attack_damage = src. getAttackDamage();
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	if (getHitPoints() > 0)
	{
		std::cout << "FragTrap "
			<< getName()
			<< "is asking for high five!"
			<< std::endl;
	}
	else
	{
		std::cout << "ClapTrap "
				<< getName()
				<< " is dead."
				<< std::endl;
	}
}
