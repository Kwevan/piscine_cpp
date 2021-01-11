#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{}

ClapTrap::ClapTrap(std::string name, int hp, int maxHp, int energy, int maxEnergy, int lvl, int meleeAd, int rangedAd, int armorReduc)
{
	this->name = name;
	this->hp = hp;
	this->maxHp = maxHp;
	this->energy = energy;
	this->maxEnergy = maxEnergy;
	this->lvl = lvl;
	this->meleeAd = meleeAd;
	this->rangedAd = rangedAd;
	this->armorReduc = armorReduc;
	srand(time(NULL));
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
}

ClapTrap &ClapTrap ::operator=(const ClapTrap &copy)
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

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount <= this->armorReduc)
		return ;
	std::cout <<  this->name << " take damages";

	if (amount > (this->hp + this->armorReduc))
		this->hp = 0;
	else
		this->hp = (this->hp - amount + this->armorReduc);
	std::cout << ", new hp = " << this->hp  << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hp + amount > this->maxHp)
		this->hp = this->maxHp;
	else
		this->hp += amount;
	std::cout <<  this->name << " is healing";
	std::cout << ", new hp = " << this->hp  << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

