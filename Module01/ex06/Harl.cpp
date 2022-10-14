#include "Harl.hpp"
#include <string>
#include <iostream>

Harl::Harl(void)
{

}

Harl::~Harl(void)
{

}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void	Harl::info(void)
{
	std::cout <<  "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;

}

void	Harl::error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	void		(Harl::*functptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	name[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int		i = 0;

	while (i < 4 && name[i].compare(level))
		i++;
	switch (i)
	{
		case 0:
			std::cout << "[ " << name[i] << " ]" << std::endl;
			(this->*functptr[i])();
			i++;
		case 1:	
			std::cout << "[ " << name[i] << " ]" << std::endl;
			(this->*functptr[i])();
			i++;
		case 2:	
			std::cout << "[ " << name[i] << " ]" << std::endl;
			(this->*functptr[i])();
			i++;
		case 3:	
			std::cout << "[ " << name[i] << " ]" << std::endl;
			(this->*functptr[i])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]"
					<< std::endl;
	}
}
