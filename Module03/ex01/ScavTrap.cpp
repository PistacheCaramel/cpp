/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 04:57:03 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/18 05:36:07 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap(_name("John Doe"), _hit_points(100), _energy_points(50), _attack_damage(20))
{

	std::cout << "ScavTrap "
			<< getName()
			<< " has been created."
			<< std::endl;
}

ScavTrap::ScavTrap(const  ScavTrap& copy)
{
	*this = copy;
	std::cout << "ScavTrap "
			<< getName()
			<< " has been created."
			<< std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(_name(name), _hit_points(100), _energy_points(50), _attack_damage(20));
{
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
