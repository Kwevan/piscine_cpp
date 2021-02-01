#include <iostream>
#include <cstdlib>

#include <unistd.h>

int main()
{
	int random;

	srand(time(NULL));
	while ((random = rand()) > 10000)
	{
	
		std::cout << " .?. ";
		usleep(200);

		if (random >= 0 && random <= 300000)
			std::cout << "that's how we're going to understand the exercise, yes, well done !";
	}
	
}
