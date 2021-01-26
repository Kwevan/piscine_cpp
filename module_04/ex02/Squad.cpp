#include "Squad.hpp"

Squad::Squad() 
{
	this->count = 0;
	this->max = 4;
	for(int i = 0; i > this->max; i++)
		this->marines[i] = 0;
	return ;
}

Squad::~Squad() 
{
	for (int i = 0; i < this->count; i++)
		delete this->marines[i];
}

Squad::Squad(const Squad &copy) 
{
  *this = copy;
}

Squad  &Squad::operator=(const Squad &copy) 
{
	this->count = copy.count;
	for (int i = 0; i < this->count; i++)
		this->marines[i] = copy.marines[i]->clone();
	return (*this);
}

int Squad::getCount() const
{
	return (this->count);
}


ISpaceMarine*	Squad::getUnit(int N) const
{
	if (N >= 0 && N < this->count)
		return (this->marines[N]);
	return (NULL);
}

int				Squad::push(ISpaceMarine *item)
{
	if (this->count >= this->max)
		return (1);
	marines[this->count] = item;
	this->count++;
return (0);
}
