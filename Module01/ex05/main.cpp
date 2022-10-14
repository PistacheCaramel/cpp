#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	harl;
	int	i = 1;

	while (argv[i])
	{
		harl.complain(argv[i]);
		i++;
	}
	return (0);
}
