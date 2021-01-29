#ifndef ROBOTOMOMYREQUESTFORM_HPP
#define ROBOTOMOMYREQUESTFORM_HPP

# include <iostream>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm &operator=(const RobotomyRequestForm &copy);
		void execute(Bureaucrat const & executor) const;

	private:
};

#endif
