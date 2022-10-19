/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 04:42:49 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/19 01:18:41 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
			ScavTrap(void);
			ScavTrap(const  ScavTrap&);
			ScavTrap(const std::string name);
			~ScavTrap(void);

		void	attack(const std::string& target);
		void	guardGate(void);
};
#endif
