#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat d("d", 151);
	}
	catch(std::exception & e)
	{
		std::cout << "1 Error: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat c("c", 0);
	}
	catch(std::exception & e)
	{
		std::cout << "2 Error: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat s("simon", 3);
		s.increment();
		s.increment();
		s.increment();
	}
	catch(std::exception & e)
	{
		std::cout << "3 Error: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat s("Simon", 150);
	 	std::cout << s;
		s.decrement();
		s.decrement();
	}
	catch(std::exception & e)
	{
		std::cout << "4 Error: " << e.what() << std::endl;
	}
}

