/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:28:53 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/20 20:28:56 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class	Animal
{
	protected:
			std::string	type;

	public:
					Animal(void);
					Animal(const  Animal&);
					Animal(const std::string type);
		virtual			~Animal(void);
		Animal&			operator=( Animal const &src);

		void			setType(const std::string type);
		std::string		getType(void) const;
		virtual void		makeSound(void) const;
};

std::ostream &	operator<<(std::ostream & o, Animal const & i);
#endif

