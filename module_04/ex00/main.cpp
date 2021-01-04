#include "Sorcerer.hpp"

void spaces(int n)
{
	for (int i = 0; i < n; i++)
		std::cout << std::endl;
}

int main()
{
	Sorcerer witch("Morgana", "of The Alliance");

	spaces(1);
	std::cout << witch << std::endl;
	spaces(1);
	
	return (0);
}
