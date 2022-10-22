#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <string>
# include "Form.hpp"

class	ShrubberyCreationForm : public Form
{
	private:
			std::string	_target;
	public:
						ShrubberyCreationForm(void);
						ShrubberyCreationForm(const ShrubberyCreationForm & copy);
						ShrubberyCreationForm(const std::string target);
						~ShrubberyCreationForm(void);
		ShrubberyCreationForm&		operator=( ShrubberyCreationForm const &src);

		std::string			getTarget(void) const;
		void				execute(Bureaucrat const & executor) const;
};

#endif
