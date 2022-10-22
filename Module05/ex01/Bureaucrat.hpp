/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 05:01:41 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/22 12:33:26 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <exception>
# include "Form.hpp"

class	Form;

class	Bureaucrat
{
	private:
			std::string	_name;
			int		_grade;
	public:
					Bureaucrat(void);
					Bureaucrat(const  Bureaucrat&);
					Bureaucrat(const std::string name, int grade);
					~Bureaucrat(void);

		Bureaucrat&		operator=( Bureaucrat const &src);

		std::string		getName(void) const; 
		int			getGrade(void) const;
		void			setName(std::string);
		void			setGrade(int grade);

		void			inc(void);
		void			dec(void);
		void			signForm(Form&);

		class			GradeTooHighException : public std::exception
					{
						public:
							virtual const char* what() const throw();
					};
		class			GradeTooLowException : public std::exception
					{	
						public:
							virtual const char* what() const throw();
					};
};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & i);
#endif

