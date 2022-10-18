/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 02:02:41 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/18 05:22:45 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

	ClapTrap::ClapTrap(void): _name("John Doe"), _hit_points(10), _energy_points(10), _attack_damage(0)
{

	std::cout << "ClapTrap "
			<< getName()
			<< " has been created."
			<< std::endl;
}

	ClapTrap::ClapTrap(const  ClapTrap& copy)
{
	*this = copy;
	std::cout << "ClapTrap "
			<< getName()
			<< " has been created."
			<< std::endl;
}

	ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap "
			<< getName()
			<< " has been created."
			<< std::endl;
}

	ClapTrap::~ClapTrap(void)
{
	std::cout << getName()
			<< " destroyed."
			<< std::endl;
}

void	ClapTrap::setName(const std::string name)
{
	this->_name = name;
}

void	ClapTrap::setHitPoints(const int hit_points)
{
	this->_hit_points = hit_points;
}

void	ClapTrap::setEnergyPoints(const int energy_points)
{
	this->_energy_points = energy_points;
}

void	ClapTrap::setAttackDamage(const int attack_damage)
{
	this->_attack_damage = attack_damage;
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

int	ClapTrap::getHitPoints(void) const
{
	return (this->_hit_points);
}

int	ClapTrap::getEnergyPoints(void) const
{
	return (this->_energy_points);
}

int	ClapTrap::getAttackDamage(void) const
{
	return (this->_attack_damage);
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap "
			<< getName()
			<< " lost "
			<< amount
			<< " hp!"
			<< std::endl;
	setHitPoints(getHitPoints() - amount);
	std::cout << "ClapTrap "
			<< getName()
			<< " has "
			<< getHitPoints()
			<< "."
			<< std::endl;
	if (getHitPoints() <= 0)
	{
		std::cout << "ClapTrap "
				<< getName()
				<< " died."
				<< std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (getEnergyPoints() > 0 && getHitPoints() > 0)
	{
		setEnergyPoints(getEnergyPoints() - 1);
		std::cout << "ClapTrap has "
				<< getHitPoints()
				<< " hp."
				<< std::endl
				<< "ClapTrap "
				<< getName()
				<< " is repairing."
				<< std::endl
				<< "..."
				<< std::endl
				<< "ClapTrap "
				<< getName()
				<< " has regained "
				<< amount
				<< " hp!"
				<< std::endl;
		setHitPoints(getHitPoints() + amount);
		std::cout << "Claptrap has now "
				<< getHitPoints()
				<< " hp."
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

void	ClapTrap::attack(const std::string& target)
{
	if (getEnergyPoints() > 0 && getHitPoints() > 0)
	{
		setEnergyPoints(getEnergyPoints() - 1);
		std::cout << "ClapTrap "
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

ClapTrap& ClapTrap::operator=(ClapTrap const &src)
{
	if (this == &src)
		return (*this);
	this->_name = src.getName();
	this->_hit_points = src.getHitPoints();
	this->_energy_points = src.getEnergyPoints();
	this->_attack_damage = src. getAttackDamage();
	return (*this);
}

std::ostream  & operator<<(std::ostream & o, ClapTrap const & i)
{
	o << i.getName();
	return (o);
}
