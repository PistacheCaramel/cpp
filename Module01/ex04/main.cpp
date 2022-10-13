#include <iostream>
#include <fstream>
#include <string>

std::string	str_extracter(char *str)
{
	return (str);
}

void	str_modifier(std::string filename
			, std::string to_change
			, std::string to_replace
			, std::string filler)
{
	size_t		pos;
	std::fstream	fs;
	char		copy[to_change.size()];
	int		start;

	fs.open(filename + ".replace"
			, std::fstream::out
			| std::fstream::trunc);
	start = 0;
	pos = to_change.find(to_replace);
	while (pos != std::string::npos && to_replace.compare(filler))
	{
		to_change.copy(copy, pos, start);
		copy[(pos - start)] = 0;
		start = pos + to_replace.size();
		if (str_extracter(copy).compare(to_replace))
			fs << copy;
		fs << filler;
		pos = to_change.find(to_replace, pos + 1);
	}
	if (start == to_change.size() || start == 0)
		fs << to_change;
	else
	{
		to_change.copy(copy, pos, start);
		copy[to_change.size() - start] = 0;
		fs << copy;
	}
	fs.close();
}

int	main(int argc, char **argv)
{
	std::string	file;
	std::string	l;
	std::fstream	fs;
	char		c;

	if (argc != 4)
	{
		std::cout << "Wrong number of arguments." << std::endl;
		return (0);
	}
	c = -128;
	fs.open(argv[1], std::fstream::in);
	if (fs.is_open())
	{ 
		while (std::getline(fs, l, c) && (file + l).size() < file.max_size())
			file += l;
		fs.close();
		str_modifier(argv[1], file, argv[2], argv[3]);
	}	
	return (0);
}
