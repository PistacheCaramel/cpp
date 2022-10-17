#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class	ClapTrap
{
	private:
		std::string		_name;
		int			_hit_points;
		int			_energy_points;
		int			_attack_damage;
	public:
					ClapTrap(void);
					ClapTrap(const  ClapTrap&);
					ClapTrap(const std::string name);
					~ClapTrap(void);
		
		void			set_name(const std:string name);
		void			set_hit_points(const int hit_point);
		void			set_energy_points(const int energy_points);
		void			set_attack_damage(const int attack_damage);

		std::string		get_name(void) const;
		int			get_hit_points(void) const;
		int			get_energy_points(void) const;
		int			get_attack_damage(void) const;

		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		ClapTrap&			operator=( ClapTrap const &src);
	
#endif
