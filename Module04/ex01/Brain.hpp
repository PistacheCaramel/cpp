#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class	Brain
{
	private:
			std::string	_ideas[100];
	public:
					Brain(void);
					Brain(const  Brain&);
					~Brain(void);
			Brain&		operator=( Brain const &src);
			
			std::string	getIdeas(int index) const;
};

std::ostream &	operator<<(std::ostream & o, Brain const & i);
#endif

