#include "Pony.hpp"
#include <iostream>
#include <unistd.h>
void ponyOnTheStack(void)
{
	Pony pony;

	pony.run("on the stack");
}

void ponyOnTheHeap(void)
{
	Pony *pony;

	pony = new Pony;
	pony->run("on the heap");
	delete pony;
}

int	main(void)
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return (0);
}
