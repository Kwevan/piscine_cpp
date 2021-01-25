#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::~PlasmaRifle() 
{}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &copy) 
{
  *this = copy;
}

PlasmaRifle  &PlasmaRifle::operator=(const PlasmaRifle &copy) 
{
	this->name = copy.name;
	this->apcost = copy.apcost;
	this->damage = copy.damage;
	return (*this);
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
