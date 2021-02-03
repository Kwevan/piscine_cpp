#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>


template <typename T>
void iter(T *array, size_t len, void (*funcPtr)(T const &))
{
	for (size_t i = 0; i < len; i++)
		funcPtr(array[i]);
}

#endif
