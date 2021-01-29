#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	//Trying to execute a non signed form
	try
	{
		ShrubberyCreationForm form("home");
		Bureaucrat b ("Madame", 10);
		b.executeForm(form);
	}
	catch(std::exception & e)
	{
		std::cout << "1 Error: " << e.what() << std::endl;	
	}
	

	//Trying to execute a signed form by a too low bureaucrat
	try
	{
		ShrubberyCreationForm form("home");
		Bureaucrat b ("Madame", 10);
		Bureaucrat tooLow ("low", 138);

		b.signForm(&form);
		tooLow.executeForm(form);
	}
	catch(std::exception & e)
	{
		std::cout << "2 Error: " << e.what() << std::endl;	
	}

	Bureaucrat				bur("Bureaucrat", 1);
	ShrubberyCreationForm	shrub("TreeForm");
	RobotomyRequestForm		robot("Mr Robot");
	PresidentialPardonForm	pres("presidentForm");

	bur.signForm(&shrub);
	bur.executeForm(shrub);

	bur.signForm(&robot);
	bur.executeForm(robot);

	bur.signForm(&pres);
	bur.executeForm(pres);

	return 0;
}

