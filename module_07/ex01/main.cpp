#include "iter.hpp"
#include <iostream>

template <typename T>
void function(T const &t)
{
	std::cout << t << std::endl;
}

int main()
{
	const size_t len = 5;
	int array[len] = {51, 42, 33, 24, 15};

	iter(array, len, &function);
}
