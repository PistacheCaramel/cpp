/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:15:03 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/22 20:47:33 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include "Bureaucrat.hpp"
# include <exception>

class	Bureaucrat;

class	Form
{
	private:
			const std::string		_name;
			bool				_sign;
			const int			_to_sign;
			const int			_to_execute;
	public:
						Form(void);
						Form(const  Form&);
						Form(const std::string name, const int to_sign, const int to_execute);
		virtual				~Form(void);
	
		Form&				operator=( Form const &src);

		std::string			getName(void) const;
		bool				getSign(void) const;
		int				getToSign(void) const;
		int				getToExecute(void) const;

		void				beSigned(Bureaucrat const & i);
		virtual void			execute(Bureaucrat const & executor) const = 0;

		class				GradeTooLowException : public std::exception
						{
							public:
								virtual const char* what() const throw();
						};
		class				FormNotSignedException : public std::exception
						{
							public:
								virtual const char* what() const throw();
						};
};

std::ostream &	operator<<(std::ostream & o, Form const & i);
#endif

