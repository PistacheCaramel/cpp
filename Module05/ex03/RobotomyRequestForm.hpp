#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <string>
# include "Form.hpp"

class	RobotomyRequestForm : public Form
{
	private:
			std::string	_target;
	public:
						RobotomyRequestForm(void);
						RobotomyRequestForm(const RobotomyRequestForm & copy);
						RobotomyRequestForm(const std::string target);
						~RobotomyRequestForm(void);
		RobotomyRequestForm&		operator=( RobotomyRequestForm const &src);

		std::string			getTarget(void) const;
		void				execute(Bureaucrat const & executor) const;
};

#endif
