/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:29:15 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/21 02:33:22 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include "Animal.hpp"

class	Dog : public Animal
{
	public:
					Dog(void);
					Dog(const  Dog&);
					~Dog(void);
		Dog&			operator=( Dog const &src);

		void			makeSound(void) const;
};

#endif
