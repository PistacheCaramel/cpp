/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:34:59 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/20 00:38:48 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
				FragTrap(void);
				FragTrap(const std::string name);
				FragTrap(const FragTrap&);
				~FragTrap(void);
		FragTrap&	operator=(FragTrap const &src);

		void		highFivesGuys(void);
};
#endif
