#include "Character.hpp"

Character::Character(const std::string &name) 
{
	this->name = name;
	this->ap = 40;
	this->weapon = NULL;
}

Character::~Character() 
{}

Character::Character(const Character &copy) 
{
 	*this = copy;
}

Character  &Character::operator=(const Character &copy) 
{
	this->name = copy.name;
	this->ap = copy.ap;
	this->weapon = copy.weapon;
	return (*this);
}

void Character::recoverAP()
{
	this->ap += 10;
	if (this->ap >40)
	this->ap = 40;
}

void Character::attack(Enemy *enemy)
{
	if (this->ap > 0 && this->weapon && this->ap >=  this->weapon->getAPCost())
	{
		std::cout << this->name << " attacks " << enemy->getType() << " with a " << this->weapon->getName() << std::endl;
		this->weapon->attack();
		this->ap -= this->weapon->getAPCost();
		enemy->takeDamage(this->weapon->getDamage());
		if (!enemy->getHP())
			delete enemy;
	}
	else
	std::cout << "No AP, no attack." << std::endl;
}

void Character::equip(AWeapon* w)
{
	this->weapon = w;
}

std::string Character::getName() const
{
	return(this->name);
}

AWeapon* Character::getWeapon()
{
	return(this->weapon);
}

int	Character::getAp()
{
	return (this->ap);
}

std::ostream& operator<<(std::ostream& out, Character &c)
{
	if (c.getWeapon())
		out << c.getName() << " has " << c.getAp() << " AP and wields a " << c.getWeapon()->getName();
	else
		out << c.getName() << " has " << c.getAp() << " AP and is unarmed";
return (out << std::endl);
}
