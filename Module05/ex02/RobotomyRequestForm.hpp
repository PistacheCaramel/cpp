#ifndef CANONCLASS_HPP
# define CANONCLASS_HPP

#include <string>

class	CanonClass
{
	public:
					CanonClass(void);
					CanonClass(const  CanonClass&);
					CanonClass(const std::string name);
					~CanonClass(void);
		CanonClass&		operator=( CanonClass const &src);
};

std::ostream &	operator<<(std::ostream & o, CanonClass const & i);
#endif

