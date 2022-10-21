/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:29:34 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/21 04:33:43 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>

class	WrongAnimal
{
	protected:
			std::string	type;

	public:
					WrongAnimal(void);
					WrongAnimal(const  WrongAnimal&);
					WrongAnimal(const std::string type);
					~WrongAnimal(void);
		WrongAnimal&			operator=( WrongAnimal const &src);

		void			setType(const std::string type);
		std::string		getType(void) const;
		void			makeSound(void) const;
};

std::ostream &	operator<<(std::ostream & o, WrongAnimal const & i);
#endif

