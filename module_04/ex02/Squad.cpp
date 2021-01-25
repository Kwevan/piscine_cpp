#include "Squad.hpp"

Squad::Squad() 
{
	this->count = 0;
	this->size = 5;
int i = 0;
	while (i < 5)
	{
		this->marines[i] = 0;
		i++;
	}
	return ;
}

Squad::~Squad() 
{}

Squad::Squad(const Squad &copy) 
{
  *this = copy;
}

Squad  &Squad::operator=(const Squad &copy) 
{
	this->count = copy.count;
	return (*this);
}

int Squad::getCount() const
{
	return (this->count);
}


ISpaceMarine*	Squad::getUnit(int N) const {

(void)N; return (0);
}

int				Squad::push(ISpaceMarine *item) {
(void)item; return (0);
}
