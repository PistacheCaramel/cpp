#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	private:
		int			_integer;
		static const int	_nbit = 8;
	public:
		Fixed(void);
		Fixed(const  Fixed&);
		Fixed(const int);
		Fixed(const float);
		Fixed	&operator=( Fixed const &src);
		~Fixed(void);
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int	toInt(void) const;
		
};

std::ostream &	operator<<(std::ostream & o, Fixed const & i);
#endif
