/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:52:38 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/24 12:52:42 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

		bool			isInt(void) const;
		bool			isChar(void) const;
		bool			isFloat(void) const;
		bool			isDouble(void) const;
		void			convertInt(void);
		void			convertFloat(void);
		void			convertDouble(void);
		void			convertChar(void);

};

std::ostream &	operator<<(std::ostream & o, Convert const & i);
#endif

