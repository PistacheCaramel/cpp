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
					~Fixed(void);

		Fixed&			operator=( Fixed const &src);
		Fixed			operator+(Fixed const &src) const;
		Fixed			operator-(Fixed const &src) const;
		Fixed			operator*(Fixed const &src) const;
		Fixed			operator/(Fixed const &src) const;
		Fixed&			operator++(void);
		Fixed			operator++(int);
		Fixed&			operator--(void);
		Fixed			operator--(int);
		bool			operator>(Fixed const &src) const;
		bool			operator<(Fixed const &src) const;
		bool			operator>=(Fixed const &src) const;
		bool			operator<=(Fixed const &src) const;
		bool			operator==(Fixed const &src) const;
		bool			operator!=(Fixed const &src) const;

		int			getRawBits(void) const;
		void			setRawBits(int const raw);
		float			toFloat(void) const;
		int			toInt(void) const;
		static Fixed&		min(Fixed & a, Fixed & b);
		static const Fixed&	min(Fixed const & a, Fixed const & b);
		static Fixed&		max(Fixed & a, Fixed & b);
		static const Fixed&	max(Fixed const & a, Fixed const & b);
		
};

std::ostream &	operator<<(std::ostream & o, Fixed const & i);
#endif
