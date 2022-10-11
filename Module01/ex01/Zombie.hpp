#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie {

	private:
		std::string	name;
	public:
				Zombie(void);
				~Zombie(void);
		void		set_name(std::string name);
		void		announce(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
