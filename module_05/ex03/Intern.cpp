#include "Intern.hpp"

Intern::Intern() 
{}

Intern::~Intern() 
{}

Intern::Intern(const Intern &copy) 
{
  *this = copy;
}

Intern  &Intern::operator=(const Intern &copy) 
{
	(void)copy;
  return (*this);
}

Form *Intern::robotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form *Intern::shrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form *Intern::presidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::makeForm(std::string name, std::string target)
{
	std::string types[3] = {
							"shrubbery request",
							"robotomy request",
							"presidential request"};

	Form *(Intern::*forms[])(std::string name) = {
							&Intern::shrubbery,
							&Intern::robotomy,
							&Intern::presidential};


	for (int i = 0; i < 3; i++)
	{
		if (name == types[i])
  		{
			std::cout << "Intern creates " << name << " form." << std::endl;

 			return (this->*forms[i])(target);   
		}
	}

	std::cout << "\nThe request form: [ " << name
				<< " ] wasn't found.\n" << std::endl;
	return (NULL);
}
