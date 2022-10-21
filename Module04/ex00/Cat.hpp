/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:29:03 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/21 02:32:45 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include "Animal.hpp"

class	Cat : public Animal
{
	public:
					Cat(void);
					Cat(const  Cat&);
					~Cat(void);
		Cat&			operator=( Cat const &src);

		void			makeSound(void) const;
};

#endif

