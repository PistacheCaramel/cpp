#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 0;
	j = 1;
	while (argv[j])
	{
		while (argv[j][i])
		{
			argv[j][i] = toupper(argv[1][i]);
			i++;
		}
		std::cout << argv[j] << std::endl;
		j++;
	}
	return (0);
}
