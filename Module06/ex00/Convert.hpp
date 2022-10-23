#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <string>

class	Convert
{
	private:	std::string	_input;
			bool		_output;
			int		_integer;
			float		_floating;
			double		_dble;
			char		_c;

	public:
					Convert(void);
					Convert(const  Convert&);
					Convert(const std::string input);
					~Convert(void);
		Convert&		operator=( Convert const &src);

		void			setInput(std::string const input);
		std::string const	getInput(void) const;
		bool			getOutput(void) const;
		int			getInt(void) const;
		float			getFloat(void) const;
		double			getDouble(void) const;
		char			getChar(void) const;

		bool			isInt(void);
		bool			isChar(void);
		bool			isFloat(void);
		bool			isDouble(void);
		void			convert_int(void);
		void			convert_float(void);
		//void			convert_double(void);
		//void			convert_char(void);

};

std::ostream &	operator<<(std::ostream & o, Convert const & i);
#endif

