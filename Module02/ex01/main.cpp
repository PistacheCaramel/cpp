#include <iostream>
#include "Fixed.hpp"

void	my_tests(void)
{
	Fixed	a;
	Fixed	b;
	Fixed	c;
	a = Fixed( -432.44f );
	b = Fixed( (int)-2147483648 );
	c = Fixed( 2147483647 );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b.toInt() << std::endl;
	std::cout << "c is " << c.toInt() << std::endl;

	b = Fixed( 8388607 );
	c = Fixed( -8388608 );
	std::cout << "b is " << b.toInt() << std::endl;
	std::cout << "c is " << c.toInt() << std::endl;
}

int main( void )
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << "----------"
			<< std::endl
			<< "My tests:"
			<< std::endl;
	my_tests();
	return 0;
}
