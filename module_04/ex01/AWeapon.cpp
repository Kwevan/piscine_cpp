#include "AWeapon.hpp"

AWeapon::AWeapon()
{}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	this->name = name;
	this->apcost = apcost;
	this->damage = damage;
}

AWeapon::AWeapon(AWeapon const &copy)
{
    *this = copy;
}

AWeapon	&AWeapon::operator=(const AWeapon &copy)
{
	this->name = copy.name;
	this->apcost = copy.apcost;
	this->damage = copy.damage;
	return (*this);
}

std::string AWeapon::getName() const
{
	return (this->name);
}

int AWeapon::getAPCost() const
{
	return(this->apcost);
}

int AWeapon::getDamage() const
{
	return (this->damage);
}

AWeapon::~AWeapon()
{}


