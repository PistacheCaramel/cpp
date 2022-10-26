#ifndef SPAN_HPP
# define SPAN_HPP

#include <string>
#include <vector>

class	Span
{
	private:
			unsigned int		_n;
			std::vector<int>	_storage;
	public:
					Span(void);
					Span(const  Span&);
					Span(unsigned int N);
					~Span(void);
					
		Span&		operator=( Span const &src);

		std::vector<int> &	getStorage(void);
		void			addNumber(const int to_add);
		int			shortestSpan(void) const;
		int			longestSpan(void) const;

		void			addMoreNumbers(std::vector<int>::iterator it, std::vector<int>::iterator ite);
		void			setRangeToAdd(unsigned int);
		class			CannotAddMoreException : public std::exception
					{
						public:
							virtual const char* what() const throw();
					};

		class			NotEnoughElementsException : public std::exception
					{
						public:
							virtual const char* what() const throw();
					};

};

#endif
