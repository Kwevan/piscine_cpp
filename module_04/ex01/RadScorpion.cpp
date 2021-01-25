#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") 
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &copy) 
{
	*this = copy;
}

RadScorpion  &RadScorpion::operator=(const RadScorpion &copy) 
{
	this->hp = copy.hp;
	this->type = copy.type;
  	return (*this);
}
