/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:03:59 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/21 02:37:19 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal
{
	private:
			Brain*	_brain;
	public:
					Dog(void);
					Dog(const  Dog&);
					~Dog(void);
		Dog&			operator=( Dog const &src);

		void			makeSound(void) const;
		std::string		getIdeas(int) const;
};

#endif
