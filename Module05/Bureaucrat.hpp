/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 05:01:41 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/21 05:02:23 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>

class	Bureaucrat
{
	private:
			std::string	_name;
			int		_grade;
	public:
					Bureaucrat(void);
					Bureaucrat(const  Bureaucrat&);
					Bureaucrat(const std::string name);
					~Bureaucrat(void);
		Bureaucrat&		operator=( Bureaucrat const &src);

		std::string		getName(void) const; 
		int			getGrade(void) const;
};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & i);
#endif

