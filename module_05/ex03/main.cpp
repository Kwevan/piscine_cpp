#include "Bureaucrat.hpp"
#include "Intern.hpp"


int main()
{
	Intern intern;
	Form *form1;
	Form *form2;
	Form *form3;

	form1 = intern.makeForm("random request", "blackhole");
	form2 = intern.makeForm("shrubbery request", "blackhole");
	form3 = intern.makeForm("presidential request", "blackhole");

	if(form1)
		delete form1;
	if(form2)
		delete form2;
	if(form3)
		delete form3;

	Intern  someRandomIntern;
	Form*   rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	if (rrf)
	{
		std::cout << "\n\nNew form:" << *rrf;
		delete rrf;
	}



	return 0;
}

