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
		i = 0;
		while (argv[j][i])
		{
			argv[j][i] = toupper(argv[j][i]);
			i++;
		}
		std::cout << argv[j];
		j++;
		if (!argv[j])
			std::cout << std::endl;
	}
	return (0);
}
