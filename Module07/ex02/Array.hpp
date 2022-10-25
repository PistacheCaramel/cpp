#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <string>
#include <exception>
#include <iostream>

template <typename T>

class	Array
{
	private:
				T * 		_array;
				unsigned int	_size;
	public:
					Array(void);
					Array(const  Array&);
					Array(unsigned int n);
					~Array(void);
		Array&		operator=( Array const &src);
		T &		operator[]( unsigned int i);


		unsigned int			size(void) const;
		T *				getArray(void) const;

		class			MemoryNotAllocException : public std::exception
					{
						public:
							virtual const char* what() const throw();
					};
};

# include "Array.tpp"
#endif

