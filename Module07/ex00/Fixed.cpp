#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void): _integer(0)
{
}

Fixed::Fixed(const  Fixed& copy)
{
	*this = copy;
}

Fixed::Fixed(const int newfix): _integer(newfix * pow(2, _nbit))
{
}

Fixed::Fixed(const float newfix): _integer(roundf(((float)newfix) * pow(2, _nbit)))
{
}

Fixed::~Fixed(void)
{

}

Fixed& Fixed::operator=(Fixed const &src)
{
	if (this == &src)
		return (*this);
	this->_integer = src.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+(Fixed const &src) const
{
	return (Fixed((float)this->toFloat() + src.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &src) const
{
	return (Fixed((float)this->toFloat() - src.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &src) const
{
	return (Fixed((float)this->toFloat() * src.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &src) const
{
	return (Fixed((float)this->toFloat() / src.toFloat()));
}

Fixed&	Fixed::operator++(void)
{
	++this->_integer;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp;

	tmp._integer = this->_integer;
	this->_integer++;
	return (tmp);
}

Fixed&	Fixed::operator--(void)
{
	--this->_integer;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp;

	tmp._integer = this->_integer;
	this->_integer--;
	return (tmp);
}

bool	Fixed::operator>(Fixed const &src) const
{
	if (this->_integer > src._integer)
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const &src) const
{
	if (this->_integer < src._integer)
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const &src) const
{
	if (this->_integer >= src._integer)
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const &src) const
{
	if (this->_integer <= src._integer)
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const &src) const
{
	if (this->_integer == src._integer)
		return (true);
	return (false);
}


bool	Fixed::operator!=(Fixed const &src) const
{
	if (this->_integer != src._integer)
		return (true);
	return (false);
}

int	Fixed::getRawBits(void) const
{
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

Fixed&	Fixed::min(Fixed & a, Fixed & b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

const Fixed&	Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed&	Fixed::max(Fixed & a, Fixed & b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

const Fixed&	Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

std::ostream  & operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return (o);
}
