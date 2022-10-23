#include "Convert.hpp"
#include <string>
#include <iostream>
#include <cctype>
#include <climits>
#include <cstdlib>
#include <cfloat>

		Convert::Convert(void): _input("")
		{
		}

		Convert::Convert(const  Convert& copy)
		{
			*this = copy;
		}

		Convert::Convert(std::string input): _input(input)
		{
		}

		Convert::~Convert(void)
		{
		}
		
void		Convert::setInput(std::string const input)
		{
			this->_input = input;
		}

std::string const Convert::getInput(void) const
		{
			return (this->_input);
		}

int		Convert::getInt(void) const
		{
			return (this->_integer);
		}

float		Convert::getFloat(void) const
		{
			return (this->_floating);
		}

double		Convert::getDouble(void) const
		{
			return (this->_dble);
		}

char		Convert::getChar(void) const
		{
			return (this->_c);
		}
		
bool		Convert::isChar(void)
		{
			if (getInput().size() > 1)
				return (false);
			if (getInput().size() == 0)
				return (false);
			if (getInput()[0] < 32 || (getInput()[0] >= '0' && getInput()[0] <= '9')
					|| getInput()[0] == 127)
			{
				return (false);
			}
			return (true);
		}

bool		Convert::isInt(void)
		{
			size_t	i;
			
			i = 0;
			if (getInput()[i] == '-' || getInput()[i] == '+')
				i++;
			if (!getInput()[i] || !isdigit(getInput()[i]))
				return (false);
			if (getInput().find_first_not_of("0123456789", i) != std::string::npos)
				return (false);
			return (true);
		}

bool		Convert::isFloat(void)
		{
			size_t	i;

			i = 0;
			if (getInput().compare("-inff") == 0 || getInput().compare("+inff") == 0
					|| getInput().compare("nanf") == 0)
				return (true);
			if (getInput()[i] == '-' || getInput()[i] == '+')
				i++;
			if (!getInput()[i] || !isdigit(getInput()[i]))
				return (false);
			i = getInput().find_first_not_of("0123456789", i);
			if (i == std::string::npos || getInput()[i] != '.')
				return (false);
			i++;
			i = getInput().find_first_not_of("0123456789", i);
			if (i == std::string::npos || getInput()[i] != 'f')
				return false;
			if (getInput()[i + 1])
				return (false);
			return (true);
		}

bool		Convert::isDouble(void)
		{
			size_t	i;

			i = 0;
			if (getInput().compare("-inf") == 0 || getInput().compare("+inf") == 0
					|| getInput().compare("nan") == 0)
				return (true);
			if (getInput()[i] == '-' || getInput()[i] == '+')
				i++;
			if (!getInput()[i] || !isdigit(getInput()[i]))
				return (false);
			i = getInput().find_first_not_of("0123456789", i);		
			if (i == std::string::npos || getInput()[i] != '.')
				return (false);
			i++;
			i = getInput().find_first_not_of("0123456789", i);
			if (i != std::string::npos)
				return false;
			return (true);
		}

void		Convert::convert_float(void)
{
		float	i;

		strtof(getInput().c_str(), NULL);
		if (strtof(getInput().c_str(), NULL) > FLT_MAX || strtof(getInput().c_str(), NULL) < -FLT_MAX)
		{
			this->_output = false;
			return ;
		}
		i = strtof(getInput().c_str(), NULL);
		this->_integer = static_cast<int>(i);
		this->_floating = static_cast<float>(i);
		this->_dble = static_cast<double>(i);
		if (i > 31 && i < 127)
			this->_c = static_cast<char>(i);
		else
			this->_c = -1;
}

void		Convert::convert_int(void)
{
		long int	i;

		i = strtol(getInput().c_str(), NULL, 10);
		if (i > INT_MAX || i < INT_MIN)
		{
			this->_output = false;
			return ;
		}
		this->_integer = static_cast<int>(i);
		this->_floating = static_cast<float>(i);
		this->_dble = static_cast<double>(i);
		if (i > 31 && i < 127)
			this->_c = static_cast<char>(i);
		else
			this->_c = -1;
}

bool		Convert::getOutput(void) const
		{
			return (_output);
		}

Convert&	Convert::operator=(Convert const &src)
		{
			std::cout << "Convert equal to Convert." << std::endl;
			if (this == &src)
				return (*this);
			return (*this);
		}

std::ostream  & operator<<(std::ostream & o, Convert const & i)
		{
			if (i.getOutput() == false)
				o << "OVERFLOW." << std::endl;
			else
			{
				if (i.getChar() == -1)
					o << "char: Non displayable" << std::endl;
				else
					o << "char: " << i.getChar() << std::endl;
				o << "int: " << i.getInt() << std::endl
					<< "float: " << i.getFloat() << "f" << std::endl
					<< "double: " << i.getDouble() << std::endl;
			}
			return (o);
		}
