#include <iostream>
#include "Fixed.hpp"
#include "header.hpp"
int	main()
{
	int a = 2;
	int b = 3;

	std::cout << "Mandatory" << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	int	x;
	int	y;
	std::cout << std::endl << "My tests:" << std::endl;
	Fixed	z(42.25f);
	Fixed	w(42.52f);

	x = 42;
	y = 24;

	swap(x, y);
	std::cout << x << std::endl << y << std::endl;
	swap(z, w);
	std::cout << z << std::endl << w << std::endl;
	std::cout << max(z, w) << " is greater than " << min(z, w);

}
