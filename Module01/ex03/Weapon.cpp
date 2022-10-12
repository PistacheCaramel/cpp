#include "Weapon.hpp"
#include <string>

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::Weapon(void)
{

}

Weapon::~Weapon(void)
{

}

std::string const &	Weapon::getType(void) const
{
	std::string const & ref = this->type;

	return (ref);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}
