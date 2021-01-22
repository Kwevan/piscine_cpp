#include "Sorcerer.hpp"
#include "Peon.hpp"


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
	
	Victim v("Teemo");
	spaces(1);

	witch.polymorph(v);	
	spaces(1);

	Peon p("p");
	witch.polymorph(p);	

	return (0);
}
