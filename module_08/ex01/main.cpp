#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "\n-----------------\n\n";
	Span span(3);
	span.addNumber(100);
	span.addNumber(12);
	span.addNumber(35);

	std::cout << "shortest span: [" << span.shortestSpan() << "]\n";
	std::cout << "longest span: [" << span.longestSpan() << "]\n";


	try
	{
		span.addNumber(35);
	}
	catch (const std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "\n-----------------\n\n";

	Span s = Span(15000);
	for (int i = 0; i < 15000; i++)
	{
		s.addNumber(i);
	}

	std::cout << "shortest span: [" << s.shortestSpan() << "]\n";
	std::cout << "longest span: [" << s.longestSpan() << "]\n";
	
	std::cout << "\n-----------------\n\n";
	
	try
	{
		Span sEmpty = Span(0);

		std::cout << sEmpty.shortestSpan() << " is the shortest \n";
	}
	catch (const std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
}
