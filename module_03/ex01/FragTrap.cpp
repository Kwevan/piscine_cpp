#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->hp = 100;
	this->maxHp = 100;
	this->energy = 100;
	this->maxEnergy = 100;
	this->lvl = 1;
	this->meleeAd = 30;
	this->rangedAd = 20;
	this->armorReduc = 5;
	srand(time(NULL));
	std::cout << "FragTrap constructor called" << std::endl;
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target
	<< " at range, causing " << this->rangedAd  << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target
	<< " in melee, causing " << this->meleeAd  << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
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

void FragTrap::beRepaired(unsigned int amount)
{
	if (this->hp + amount > this->maxEnergy)
		this->hp = this->maxEnergy;
	else
		this->hp += amount;
	std::cout <<  this->name << " is healing";
	std::cout << ", new hp = " << this->hp  << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::string attack[5] =
	{
		"Death Mark",
		"Shockave",
		"Last Breath",
		"Final Spark",
		"Life Form Disintegration Ray",
	};
	if (this->energy < 25)
	{
		std::cout << this->name << " can't cast any more spells, not enough energy. got: " << this->energy << ", requires 25." << std::endl;	
		return ;
	}
	std::cout << "FR4G-TP " << this->name << " attacks" << target
	<< "with: " << attack[rand() % 5] << std::endl;	
	
	this->energy -= 25;
}
