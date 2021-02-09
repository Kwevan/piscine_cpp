#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <deque>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack<T>() : std::stack<T>(){};
		MutantStack<T>(const MutantStack<T> &copy) : std::stack<T>(copy){};
		virtual	~MutantStack<T>(){};
		MutantStack &operator=(const MutantStack &copy)
		{
			std::stack<T>::operator=(copy);
			return *this;
		}
		typedef typename std::deque<T>::iterator iterator;
		iterator begin(){return this->c.begin();}
		iterator end(){return this->c.end();}
 private:
};

#endif
