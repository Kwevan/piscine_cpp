#include "Pony.hpp"
#include <iostream>
#include <unistd.h>
void ponyOnTheHeap(void)
{
	Pony pony;

	pony.run("on the heap");
}

void ponyOnTheStack(void)
{
	Pony *pony;

	pony = new Pony;
	pony->run("on the stack");
	delete pony;
}

int	main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}
