#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void): _integer(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const  Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;

}

Fixed& Fixed::operator=(Fixed const &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &src)
		return (*this);
	this->_integer = src.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_integer);
}

void	Fixed::setRawBits(int const raw)
{
	this->_integer = raw;
}

std::ostream  & operator<<(std::ostream & o, Fixed const & i)
{
	o << i.getRawBits();
	return (o);
}
