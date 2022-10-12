#include "HumanB.hpp"
#include "Weapon.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
}

HumanB::~HumanB(void)
{

}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack(void) const
{
	std::cout << this->name
			<< " attacks with their "
			<< this->weapon->getType()
			<< std::endl;
}
