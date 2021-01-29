#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery", 145, 137) 
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string aTarget) : Form("Shrubbery", 145, 137)
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

	std::string fName = getTarget();
	fName += "_shrubbery";

	std::ofstream myFile(fName);

  	myFile << "\n  *  \n *** \n*****\n  |   \n\n";
 
 	myFile << "\n  *      *      *\n ***    ***    ***\n*****  *****  *****\n  |      |      |\n\n";
 	myFile << "\n  *  \n *** \n*****\n  |   \n\n";
	

    myFile.close();
}
