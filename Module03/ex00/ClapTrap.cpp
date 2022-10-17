#include "ClapTrap.hpp"
#include <iostream>
#include <cmath>

	ClapTrap::ClapTrap(void): _name("John Doe"), _hit_point(10), _energy_point(10), _attack_damage(0);
{

}

	ClapTrap::ClapTrap(const  ClapTrap& copy)
{
	*this = copy;
}

	ClapTrap::ClapTrap(std:string name): _name(name), _hit_point(10), _energy_point(10), _attack_damage(0)
{

}

	ClapTrap::~ClapTrap(void)
{

}

void	ClapTrap::set_name(const std::string name)
{
	this->_name = name;
}

void	ClapTrap::set_hit_points(const int hit_points)
{
	this->_hit_points = hit_points;
}

void	ClapTrap::set_energy_points(const int energy_points)
{
	this->_energy_points = energy_points;
}

void	ClapTrap::set_attack_damage(const int attack_damage)
{
	this->_attack_damage = attack_damage;
}

std::string	get_name(void)
{
	return (this->name);
}

int	ClapTrap::get_hit_points(void)
{
	return (this->_hit_points);
}

int	ClapTrap::get_energy_points(void)
{
	return (this->_energy_points);
}

int	ClapTrap::get_attack_damage(void)
{
	return (this->_attack_damage);
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap "
			<< get_name()
			<< " lost "
			<< amount
			<< " hp!"
			<< std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (get_energy_points() > 0 && get_hit_points() > 0)
	{
		set_energy_points(get_energy_points() - 1);
		std::cout << "ClapTrap has "
				<< get_hit_points()
				<< " hp."
				<< std::endl
				<< "ClapTrap "
				<< get_name()
				<< " is repairing."
				<< std::endl
				<< "..."
				<< std::endl
				<< "ClapTrap "
				<< get_name()
				<< " has regained "
				<< amount
				<< " hp!"
				<< std::endl;
		set_hit_points(get_hit_points() + amount);
		std::cout << "Claptrap has now "
				<< get_hit_points()
				<< " hp."
				<< std::endl;
	}
}
// faire une sorti au cas ou plus de pv ou pm
void	ClapTrap::attack(const std::string& target)
{
	ClapTrap	oponent(target);

	if (get_energy_points() > 0 && get_hit_points() > 0)
	{
		set_energy_points(get_energy_points() - 1);
		std::cout << "ClapTrap "
				<< get_name();
				<< " attacks ";
				<< oponent.get_name();
				<< " causing "
				<< get_attack_damage();
				<< "!"
				<< std::endl;
		oponent.set_hit_points(get_attack_damage());
	}
}

ClapTrap& ClapTrap::operator=(ClapTrap const &src)
{
	if (this == &src)
		return (*this);
	this->_name = src.get_name();
	this->_hit_point = src.get_hit_points();
	this->_energy_point = src.get_energy_points();
	this->_attack_damage = src. get_attack_damage();
	return (*this);
}

