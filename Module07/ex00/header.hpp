#ifndef HEADER_HPP
# define HEADER_HPP

template< typename T >
T	max(T const & x, T const & y){
	return (x > y ? x : y);
}

template< typename T >
T	min(T const & x, T const & y){
	return (x < y ? x : y);
}

template< typename T >
void	swap(T & x, T & y){
	T	c = x;

	x = y;
	y = c;
}
#endif
