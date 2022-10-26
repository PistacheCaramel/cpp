#ifndef ITER_HPP
# define ITER_HPP

# include <algorithm>

class	DontFindException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Dont't find this.");
			}
	};

template < typename T >
typename T::iterator	easyfind(T container, int to_find)
{
	typename T:: iterator	it;

	it = find(container.begin(), container.end(), to_find);
	if (it == container.end())
		throw DontFindException();
	else
		return (it);

}

#endif
