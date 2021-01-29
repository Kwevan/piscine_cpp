#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Pres", 25, 5) 
{}

PresidentialPardonForm::PresidentialPardonForm(std::string aTarget) : Form("Pres", 25, 5)
{
	setTarget(aTarget);
}

PresidentialPardonForm::~PresidentialPardonForm() 
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy)
{
  *this = copy;
}

PresidentialPardonForm  &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy) 
{
	(void)copy;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	(void)executor;

	std::cout << getTarget() << "has been pardoned by Zafod Beeblebrox." << std::endl;
}
