#include "iter.hpp"
#include <iostream>

void	double_value(const int &i)
{
	std::cout << i * 2 << ",";
}

int	main()
{
	int	tab[6] = {2, 4, 6, 8, 10, 12};

	iter(tab, 6, double_value);
	return (0);
}
