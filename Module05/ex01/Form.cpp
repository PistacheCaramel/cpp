/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:15:09 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/22 13:26:42 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

		Form::Form(void): _name("A38"), _sign(false), _to_sign(150), _to_execute(1)
		{
			std::cout << "Form "
					<< getName()
					<< " created."
					<< std::endl;
		}

		Form::Form(const  Form& copy): _name(copy.getName()), _sign(copy.getSign()), _to_sign(copy.getToSign()), _to_execute(copy.getToExecute())

		{
			*this = copy;
			std::cout << "Form "
					<< getName()
					<< " copied."
					<< std::endl;
		}

		Form::Form(std::string name, int to_sign, int to_execute): _name(name), _sign(false), _to_sign(to_sign), _to_execute(to_execute)
		{
			if (to_sign < 1 || to_execute < 1)
				throw Bureaucrat::GradeTooHighException();
			if (to_sign > 150 || to_execute > 150)
				throw Bureaucrat::GradeTooLowException();
			std::cout << "Form "
					<< getName()
					<< " created whith attributes."
					<< std::endl;
		}

		Form::~Form(void)
		{
			std::cout << "Form "
					<< getName()
					<< " destroyed."
					<< std::endl;
		}

std::string	Form::getName(void) const
		{
			return (this->_name);
		}

bool		Form::getSign(void) const
		{
			return (this->_sign);
		}

int		Form::getToSign(void) const
		{
			return (this->_to_sign);
		}

int		Form::getToExecute(void) const
		{
			return (this->_to_execute);
		}

void		Form::beSigned(Bureaucrat const & i)
		{
			if (i.getGrade() > getToSign())
				throw GradeTooLowException();
			this->_sign = true;
		}

const char*	Form::GradeTooLowException::what() const throw()
		{
			return ("Grade too low.");
		}

Form&		Form::operator=(Form const &src)
		{
			(void) src;
			std::cout << "Form has already const values." << std::endl;
			return (*this);
		}

std::ostream  & operator<<(std::ostream & o, Form const & i)
		{
			o << "Form "
				<< i.getName()
				<< " needs grade "
				<< i.getToSign()
				<< " to be signed and grade "
				<< i.getToExecute()
				<< " to be execute and it is ";
			if (i.getSign() == true)
				o << "signed.";
			else
				o << "not signed.";
			return (o);
		}
