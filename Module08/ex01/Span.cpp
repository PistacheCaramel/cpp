#include "Span.hpp"
#include <string>

		Span::Span(void): _n(0)
		{
		}

		Span::Span(const  Span& copy)
		{
			*this = copy;
		}

		Span::Span(int N): _n(N)
		{
		}

		Span::~Span(void)
		{
		}

void		Span::addNumber(int i)
		{
			if (this->_storage.size() + 1 < N)
				this->_storage.push_back(i);
			else
				throw CannotAddMoreException();
		}
				
Span&	Span::operator=(Span const &src)
{
	if (this == &src)
		return (*this);
	return (*this);
}

const char*	Span::CannotAddMoreException::what() const throw()
		{
			return ("Max size reached");
		}

std::ostream  & operator<<(std::ostream & o, Span const & i)
{
	return (o);
}
