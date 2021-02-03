#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	public:
		Array() {array = NULL;}
		~Array() { delete []array;}
		int size(){return 1;}
	private:
			T *array;
};

#endif
