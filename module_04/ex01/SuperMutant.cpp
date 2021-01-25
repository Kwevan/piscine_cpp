#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(70, "Super Mutant") 
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant() 
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &copy) 
{
  *this = copy;
}

SuperMutant  &SuperMutant::operator=(const SuperMutant &copy) 
{
	this->hp = copy.hp;
	this->type = copy.type;
	return (*this);
}

void SuperMutant::takeDamage(int dmg)
{
	this->hp -= 3;
	Enemy::takeDamage(dmg);
}

