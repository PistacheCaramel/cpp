#include <iostream>
#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	a;
	ClapTrap	b("Pika");
	ClapTrap	c("Johnson");
	ClapTrap	d(c);
	int		i;

	i = 0;
	a.attack("A flower");
	std::cout << "A Flower attack "
			<< a
			<< " causing 10!"
			<< std::endl;
	a.takeDamage(10);
	a.beRepaired(10);
	while (i < 10)
	{
		b.attack(c.getName());
		c.takeDamage(b.getAttackDamage());
		i++;
	}
	b.attack("");
	b.beRepaired(0);
	c.beRepaired(10);
	return (0);
}
