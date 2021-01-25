#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) 
{}

PowerFist::~PowerFist() 
{}

PowerFist::PowerFist(const PowerFist &copy) 
{
  *this = copy;
}

PowerFist  &PowerFist::operator=(const PowerFist &copy) 
{
	this->name = copy.name;
	this->apcost = copy.apcost;
	this->damage = copy.damage;
	return (*this);
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
