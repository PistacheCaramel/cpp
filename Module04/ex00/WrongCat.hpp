/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:27:35 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/20 20:27:36 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <string>
# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	public:
					WrongCat(void);
					WrongCat(const  WrongCat&);
					WrongCat(const std::string type);
					~WrongCat(void);
		WrongCat&			operator=( WrongCat const &src);

		void			makeSound(void) const;
};

#endif

