#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Form f("Les papiers", 0, 5);
		//Form f("Les papiers", 151, 5);
		//Form f("Les papiers", 5, 0);
		//Form f("Les papiers", 5, 151);
	}
	catch(std::exception & e)
	{
		std::cout << "1 Error: " << e.what() << "\n";
	}

	std::cout << "\n\n-----------\n\n";

	try
	{
		Form f("Les papiers", 1, 5);
		Form fcopy("Les papiers", 1, 5);

		std::cout << f;

		std::cout << "\n\n-----------\n\n";

		Bureaucrat jePese("dans le game", 1);
		std::cout << "trying to make jePese sign" << std::endl;
		f.beSigned(jePese);

		std::cout << "\n\n-----------\n\n";

		std::cout << f;


		std::cout << "decrementing jePese's grade" << std::endl;
		jePese.decrement();
		std::cout << "\n\n-----------\n\n";

		std::cout << "trying to make jePese sign again" << std::endl;
		std::cout << "\n\n-----------\n\n";
		std::cout << "\n\n-----------\n\n";
		fcopy.beSigned(jePese);

	}
	catch(std::exception & e)
	{
		std::cout << "2 Error: " << e.what() << std::endl;	
	}
	
	try
	{
		Form form("foooooooooooooooooorm", 1, 5);	
		Bureaucrat man("Monsieur le Bureaucrate", 1);

		std::cout << form;

//		man.signForm(&form);

//		std::cout << form;
	}
	catch (std::exception & e)
	{
		std::cout << "3 Error: " << e.what() << std::endl;	
	}

	return 0;
}

