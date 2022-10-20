#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include "Animal.hpp"

class	Dog : public Animal
{
	public:
					Dog(void);
					Dog(const  Dog&);
					Dog(const std::string type);
					~Dog(void);
		Dog&			operator=( Dog const &src);

		void			makeSound(void) const;
};

#endif
