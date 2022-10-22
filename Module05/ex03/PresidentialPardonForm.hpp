#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <string>
# include "Form.hpp"

class	PresidentialPardonForm : public Form
{
	private:
			std::string	_target;
	public:
						PresidentialPardonForm(void);
						PresidentialPardonForm(const PresidentialPardonForm & copy);
						PresidentialPardonForm(const std::string target);
						~PresidentialPardonForm(void);
		PresidentialPardonForm&		operator=( PresidentialPardonForm const &src);

		std::string			getTarget(void) const;
		void				execute(Bureaucrat const & executor) const;
};

#endif
