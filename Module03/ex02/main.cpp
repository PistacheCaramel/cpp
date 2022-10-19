#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>

void	test_flagtrap_features( FragTrap & flag)
{
	flag.highFivesGuys();
	std::cout << std::endl;
	while (flag.getHitPoints() > 0)
	{
		flag.takeDamage(10);
		std::cout << std::endl;
	}
	flag.highFivesGuys();
	std::cout << std::endl;
}

void	test_scavtrap_features(ScavTrap & scav)
{
	scav.guardGate();
	std::cout << std::endl;
	while (scav.getHitPoints() > 0)
	{
		scav.takeDamage(10);
		std::cout << std::endl;
	}
	scav.guardGate();
	std::cout << std::endl;
}

void	test_claptrap_features(ClapTrap & clap)
{
	clap.attack("A Flower");
	std::cout << std::endl;
	clap.takeDamage(5);
	std::cout << std::endl;
	clap.beRepaired(2);
	std::cout << std::endl;
	while (clap.getEnergyPoints() > 0)
	{
		clap.attack("Who knows");
		std::cout << std::endl;
	}
	clap.beRepaired(2);
	std::cout << std::endl;
	while (clap.getHitPoints() > 0)
	{
		clap.takeDamage(10);
		std::cout << std::endl;
	}
	clap.attack("His beloved soul");
	clap.beRepaired(2);
	std::cout << std::endl;
	clap.takeDamage(10);
	std::cout << std::endl;
}

void	test_claptrap_features_for_frag(FragTrap & clap)
{
	clap.attack("A Flower");
	std::cout << std::endl;
	clap.takeDamage(5);
	std::cout << std::endl;
	clap.beRepaired(2);
	std::cout << std::endl;
	while (clap.getEnergyPoints() > 0)
	{
		clap.beRepaired(2);
		std::cout << std::endl;
	}
	clap.beRepaired(2);
	std::cout << std::endl;
	while (clap.getHitPoints() > 0)
	{
		clap.takeDamage(10);
		std::cout << std::endl;
	}
	clap.attack("His beloved soul");
	clap.beRepaired(2);
	std::cout << std::endl;
	clap.takeDamage(10);
	std::cout << std::endl;
}
void	test_flagtrap(void)
{
	FragTrap	a;
	FragTrap	b("Banner");
	FragTrap	c("Bruce");
	FragTrap	d(c);
	FragTrap	e("");
	FragTrap	f = c;

	
	test_claptrap_features_for_frag(a);
	//test_claptrap_features_for_frag(b);
	//test_claptrap_features_for_frag(c);
	//test_claptrap_features_for_frag(d);
	//test_claptrap_features_for_frag(e);
	//test_claptrap_features_for_frag(f);
	//test_flagtrap_features(a);
	//test_flagtrap_features(b);
	test_flagtrap_features(c);
	//test_flagtrap_features(d);
	//test_flagtrap_features(e);
	//test_flagtrap_features(f);
}

void	test_claptrap_features_for_scav(ScavTrap & clap)
{
	clap.attack("A Flower");
	std::cout << std::endl;
	clap.takeDamage(5);
	std::cout << std::endl;
	clap.beRepaired(2);
	std::cout << std::endl;
	while (clap.getEnergyPoints() > 0)
	{
		clap.beRepaired(2);
		std::cout << std::endl;
	}
	clap.beRepaired(2);
	std::cout << std::endl;
	while (clap.getHitPoints() > 0)
	{
		clap.takeDamage(10);
		std::cout << std::endl;
	}
	clap.attack("His beloved soul");
	clap.beRepaired(2);
	std::cout << std::endl;
	clap.takeDamage(10);
	std::cout << std::endl;
}

void	test_scavtrap(void)
{
	ScavTrap	a;
	ScavTrap	b("Enter a name here");
	ScavTrap	c("Enter another name here");
	ScavTrap	d(c);
	ScavTrap	e("");
	ScavTrap	f = b;

	std::cout << "Tests Claptrap features on ScavTrap:"
			<< std::endl << std::endl;
	//test_claptrap_features_for_scav(a);
	//test_claptrap_features_for_scav(b);
	test_claptrap_features_for_scav(c);
	//test_claptrap_features_for_scav(d);
	//test_claptrap_features_for_scav(e);
	//test_claptrap_features_for_scav(f);
	std::cout << "Tests ScavTrap features on ScavTrap:"
			<< std::endl << std::endl;
	//test_scavtrap_features(a);
	//test_scavtrap_features(b);
	//test_scavtrap_features(c);
	//test_scavtrap_features(d);
	//test_scavtrap_features(e);
	//test_scavtrap_features(f);
}

void	test_claptrap(void)
{
	ClapTrap	a;
	ClapTrap	b("Flowi");
	ClapTrap	c("Banana eater");
	ClapTrap	d(c);
	ClapTrap	e("");
	ClapTrap	f = e;

//	test_claptrap_features(a);
	test_claptrap_features(b);
//	test_claptrap_features(c);
//	test_claptrap_features(d);
//	test_claptrap_features(e);
//	test_claptrap_features(f);
}


int main()
{

//	std::cout << "TEST CLAPTRAP:" << std::endl;
//	test_claptrap();
//	std::cout << std::endl << std::endl << std::endl;
//	std::cout << "TEST SCAVTRAP" << std::endl;
//	test_scavtrap();
//	std::cout << std::endl << std::endl << std::endl;
	std::cout << "TEST FLAGTRAP" << std::endl;
	test_flagtrap();
}
