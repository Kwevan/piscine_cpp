#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{


	//Trying to execute an non signed form
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
	

	//Trying to execute an signed form by a too low bureaucrat
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

	Bureaucrat				bur("eaucrat", 1);
	ShrubberyCreationForm	shrub("b");
//	RobotomyRequestForm		robot("o");
//	PresidentialPardonForm	pres("i");

	bur.signForm(&shrub);
	bur.executeForm(shrub);

//	bur.signForm(robot);
//	bur.executeForm(robot);

//	bur.signForm(pres);
//	bur.executeForm(pres);

	return 0;
}

