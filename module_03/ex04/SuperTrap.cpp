#include "SuperTrap.hpp"


SuperTrap::SuperTrap() : ClapTrap(), FragTrap(), NinjaTrap()
{}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name, 100, 100, 120, 120, 1, 60, 20, 5), FragTrap(name), NinjaTrap(name)
{
	std::cout << "SuperTrap constructor called" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &copy)
{
    *this = copy;
}

SuperTrap &SuperTrap::operator=(const SuperTrap &copy)
{
	this->name = copy.name;
 	this->hp = copy.hp;
	this->maxHp = copy.maxHp;
	this->energy = copy.energy;
	this->lvl = copy.lvl;
	this->meleeAd = copy.meleeAd;
	this->rangedAd = copy.rangedAd;
	this->armorReduc = copy.armorReduc;
	return(*this);
}

void SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap destructor called" << std::endl;
}
