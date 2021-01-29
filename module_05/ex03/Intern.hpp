#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern &copy);
		~Intern();
		Intern &operator=(const Intern &copy);

		Form	*makeForm(std::string name, std::string target);

		Form *robotomy(std::string target);
		Form *shrubbery(std::string target);
		Form *presidential(std::string target);

 private:
};

#endif
