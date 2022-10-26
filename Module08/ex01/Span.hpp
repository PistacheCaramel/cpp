#ifndef SPAN_HPP
# define SPAN_HPP

#include <string>
#include <vector>

class	Span
{
	private:
			int			_n;
			std::vector<int>	_storage;
	public:
					Span(void);
					Span(const  Span&);
					Span(int N);
					~Span(void);
					
		Span&		operator=( Span const &src);

		void		addNumber(const int to_add);
		int		shortestSpan(void) const;
		int		longestSpan(void) const;

		class		CannotAddMoreException : public std::exception
				{
					public:
						virtual const char* what() const throw();
				}
};

std::ostream &	operator<<(std::ostream & o, Span const & i);
#endif
