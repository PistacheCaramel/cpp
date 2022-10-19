/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 04:57:03 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/19 02:16:42 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ScavTrap::ScavTrap(void): ClapTrap("John Doe")
{

	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap "
			<< getName()
			<< " has been created."
			<< std::endl;
}

ScavTrap::ScavTrap(const  ScavTrap& copy): ClapTrap(copy.getName())
{
	*this = copy;
	std::cout << "ScavTrap "
			<< getName()
			<< " has been created."
			<< std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap "
			<< getName()
			<< " has been created."
			<< std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << getName()
			<< " has been destroyed."
			<< std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (getEnergyPoints() > 0 && getHitPoints() > 0)
	{
		setEnergyPoints(getEnergyPoints() - 1);
		std::cout << "ScavTrap "
				<< getName()
				<< " attacks "
				<< target
				<< " causing "
				<< getAttackDamage()
				<< "!"
				<< std::endl;
	}
	else if (getEnergyPoints() <= 0)
	{
		std::cout << "You haven't enough energy points to do this."
				<< std:: endl;
	}
	else
	{
		std::cout << "ClapTrap "
				<< getName()
				<< " is dead."
				<< std::endl;
	}
}

void	ScavTrap::guardGate(void)
{
	if (getHitPoints() > 0)
	{
		std::cout << "ScavTrap "
			<< getName()
			<< " is entering in Gate Keeper Mode."
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
