#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include "Animal.hpp"

class	Cat : public Animal
{
	public:
					Cat(void);
					Cat(const  Cat&);
					Cat(const std::string type);
					~Cat(void);
		Cat&			operator=( Cat const &src);

		void			makeSound(void) const;
};

#endif

