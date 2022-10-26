#include "Span.hpp"
#include <string>
#include <algorithm>
#include <vector>
#include <numeric>
#include <climits>

		Span::Span(void): _n(0)
		{
		}

		Span::Span(const  Span& copy)
		{
			*this = copy;
		}

		Span::Span(unsigned int N): _n(N)
		{
		}

		Span::~Span(void)
		{
		}

std::vector <int> &	 Span::getStorage(void)
		{
			return (this->_storage);
		}

void		Span::addNumber(int i)
		{
			if (this->_storage.size() < this->_n)
				this->_storage.push_back(i);
			else
				throw CannotAddMoreException();
		}
		
int		Span::shortestSpan(void) const
		{
			std::vector<int>	tmp;
			std::vector<int>	tmp2(this->_storage);

			if (this->_storage.size() < 2 || this->_n < 2)
				throw NotEnoughElementsException();
			else
			{
				tmp = this->_storage;
				std::sort(tmp.begin(), tmp.end());
				std::adjacent_difference(tmp.begin(), tmp.end(), tmp2.begin());
				return (*std::min_element(tmp2.begin(), tmp2.end()));
			}
		}

int		Span::longestSpan (void) const
		{
			if (this->_storage.size() < 2 || this->_n < 2)
				throw NotEnoughElementsException();
			else
				return (*std::max_element(this->_storage.begin(), this->_storage.end())
					- *std::min_element(this->_storage.begin(), this->_storage.end()));
		}

void		Span::addMoreNumbers(std::vector<int>::iterator it, std::vector<int>::iterator ite)
		{
			if (ite < it || static_cast<unsigned int>(ite - it) > this->_n - this->_storage.size())
				throw NotEnoughElementsException();
			else
				this->_storage.insert(this->_storage.end(), it, ite);
		}

void		Span::setRangeToAdd(unsigned int i)
		{
			unsigned int		j;
			std::vector <int>	tmp;

			j = 0;
			srand(time(NULL));
			while (j < i)
			{
				tmp.push_back(rand() % 1000);
				j++;
			}
			addMoreNumbers(tmp.begin(), tmp.end());
		}


Span&		Span::operator=(Span const &src)
		{
			if (this == &src)
				return (*this);
			return (*this);
		}

const char*	Span::CannotAddMoreException::what() const throw()
		{
			return ("Max size reached");
		}

const char*	Span::NotEnoughElementsException::what() const throw()
		{
			return ("Not enough element to span.");
		}

