/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 02:02:27 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/18 05:29:34 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class	ClapTrap
{
	protected:
		std::string		_name;
		int			_hit_points;
		int			_energy_points;
		int			_attack_damage;
		
		void			setName(const std::string name);
		void			setHitPoints(const int hit_point);
		void			setEnergyPoints(const int energy_points);
		void			setAttackDamage(const int attack_damage);

		int			getHitPoints(void) const;
		int			getEnergyPoints(void) const;
		int			getAttackDamage(void) const;

	public:
					ClapTrap(void);
					ClapTrap(const  ClapTrap&);
					ClapTrap(const std::string name);
					~ClapTrap(void);
		std::string		getName(void) const;
		
		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		ClapTrap&			operator=( ClapTrap const &src);
};

std::ostream &	operator<<(std::ostream & o, ClapTrap const & i);
#endif
