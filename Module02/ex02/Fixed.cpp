#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void): _integer(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const  Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int newfix): _integer(newfix * pow(2, _nbit))
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float newfix): _integer(roundf(((float)newfix) * pow(2, _nbit)))
{
	std::cout << "Float constructor called" << std::endl;
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

int	Fixed::toInt(void) const
{
	return (this->_integer / pow(2, this->_nbit));
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->_integer / pow(2, this->_nbit)));
}

std::ostream  & operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return (o);
}
