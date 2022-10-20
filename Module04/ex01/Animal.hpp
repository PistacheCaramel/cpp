#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class	Animal
{
	protected:
			std::string	type;

	public:
					Animal(void);
					Animal(const  Animal&);
					Animal(const std::string type);
		virtual			~Animal(void);
		Animal&			operator=( Animal const &src);

		void			setType(const std::string type);
		std::string		getType(void) const;
		virtual void		makeSound(void) const;
};

std::ostream &	operator<<(std::ostream & o, Animal const & i);
#endif

