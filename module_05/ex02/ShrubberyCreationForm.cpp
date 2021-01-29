#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrub", 145, 137) 
{}
ShrubberyCreationForm::ShrubberyCreationForm(std::string aTarget) : Form("Shrub", 145, 137)
{
	setTarget(aTarget);
}

ShrubberyCreationForm::~ShrubberyCreationForm() 
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy)
{
  *this = copy;
}

ShrubberyCreationForm  &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy) 
{
	(void)copy;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	(void)executor;
	std::cout << "Todo: create a file with target name and draw a tree inside";
}
