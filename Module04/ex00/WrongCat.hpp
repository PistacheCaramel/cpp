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

