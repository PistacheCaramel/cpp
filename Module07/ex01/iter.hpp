#ifndef ITER_HPP
# define ITER_HPP

# include <cstdlib>

template < typename T >
void	iter(T const * tab, size_t size, void fptr(const T &))
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		fptr(tab[i]);
		i++;
	}
}

#endif
