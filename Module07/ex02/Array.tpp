#ifndef ARRAY_TPP
# define ARRAY_TPP


template <typename T>
		Array<T>::Array(void): _array(NULL), _size(0)
		{
		}

template <typename T>
		Array<T>::Array(const  Array& copy) 
		{
			unsigned int	i;

			i = 0;
			if (copy._array == NULL)
			{
				this->_array = NULL;
				this->_size = 0;
			}
			else
			{
				this->_array = new T[copy.size()];
				while (i < copy.size())
				{
					this->_array[i] = copy.getArray()[i];
					i++;
				}
				this->_size = copy.size();
			}
		}

template <typename T>
		Array<T>::Array(unsigned int i): _array(new T[i]), _size(i)
		{
		}

template <typename T>
		Array<T>::~Array(void)
		{
			if (this->_array)
				delete[] this->_array;
		}

template <typename T>
T*		Array<T>::getArray(void) const
		{
			return (this->_array);
		}

template <typename T>
unsigned int	Array<T>::size(void) const
{
		return (this->_size);
}

template <typename T>
Array<T> &	Array<T>::operator=(Array const &src)
{
	unsigned int	i;

	i = 0;
	if (this == &src)
		return (*this);
	if (this->_array)
		delete[] this->_array;
	if (src.getArray() == NULL)
	{
		this->_array = NULL;
		this->_size = 0;
	}
	else
	{
		this->_array = new T[src.size()];
		while (i < src.size())
		{
			this->_array[i] = src.getArray()[i];
			i++;
		}
		this->_size = src.size();
	}
	return (*this);
}

template <typename T>
T &		Array<T>::operator[](unsigned int i)
		{
			if (i >= this->_size)
				throw MemoryNotAllocException();
			else 
				return (this->_array[i]);
		}

template <typename T>
const char*	Array<T>::MemoryNotAllocException::what() const throw()
{
		return ("You can't access that part of memory");
}
#endif
