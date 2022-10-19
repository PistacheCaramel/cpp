#include <iostream>
#include "ClapTrap.hpp"

void	test_claptrap_features(ClapTrap & clap)
{
	clap.attack("A Flower");
	std::cout << std::endl;
	clap.takeDamage(5);
	std::cout << std::endl;
	clap.beRepaired(10);
	clap.beRepaired(2147483647);
	clap.takeDamage(2147483647);
	std::cout << std::endl;
	while (clap.getEnergyPoints() > 0)
	{
		clap.beRepaired(10);
		std::cout << std::endl;
	}
	clap.beRepaired(10);
	std::cout << std::endl;
	while (clap.getHitPoints() > 0)
	{
		clap.takeDamage(10);
		std::cout << std::endl;
	}
	clap.attack("His beloved soul");
	clap.beRepaired(10);
	std::cout << std::endl;
	clap.takeDamage(10);
	std::cout << std::endl;
}

void	test_claptrap(void)
{
	ClapTrap	a;
	ClapTrap	b("Flowi");
	ClapTrap	c("Banana eater");
	ClapTrap	d(c);
	ClapTrap	e("");
	ClapTrap	f = e;

	//test_claptrap_features(a);
	test_claptrap_features(b);
	//test_claptrap_features(c);
	//test_claptrap_features(d);
	//test_claptrap_features(e);
}

int main()
{

	test_claptrap();
}
