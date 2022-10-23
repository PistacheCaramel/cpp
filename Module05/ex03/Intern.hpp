#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include "Form.hpp"

class	Intern
{
	public:
					Intern(void);
					Intern(const  Intern&);
					~Intern(void);
		Intern&			operator=( Intern const &src);

		Form*			makeForm(std::string name, std::string target);

		class			Formdoesntexist : public std::exception
					{
						public:
							virtual const char* what() const throw();
					};
};

#endif

