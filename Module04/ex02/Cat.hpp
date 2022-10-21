/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:03:51 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/21 02:37:41 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal
{
	private:
			Brain*	_brain;
	public:
					Cat(void);
					Cat(const  Cat&);
					~Cat(void);
		Cat&			operator=( Cat const &src);

		void			makeSound(void) const;
		std::string		getIdeas(int) const;
};

#endif
