#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <iostream>
# include <list>
# include <sstream>

template <typename T>
int easyfind(T cont, int to_find)
{
    std::list<int>::iterator findIter; 
	findIter = std::find(cont.begin(), cont.end(), to_find);
	if (findIter == cont.end())
	{
		std::ostringstream msg;
		msg << "Element [" << to_find << "] not found";	
		throw std::runtime_error(msg.str());
	}
	return (*findIter);
}

#endif
