#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->hp = 100;
	this->maxHp = 100;
	this->energy = 50;
	this->maxEnergy = 50;
	this->lvl = 1;
	this->meleeAd = 20;
	this->rangedAd = 15;
	this->armorReduc = 3;
	srand(time(NULL));
	std::cout << "ScavTrap constructor called" << std::endl;
}

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target
	<< " at range, causing " << this->rangedAd  << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target
	<< " in melee, causing " << this->meleeAd  << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
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

void ScavTrap::beRepaired(unsigned int amount)
{
	if (this->hp + amount > this->maxEnergy)
		this->hp = this->maxEnergy;
	else
		this->hp += amount;
	std::cout <<  this->name << " is healing";
	std::cout << ", new hp = " << this->hp  << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const &target)
{
	std::string attack[5] =
	{
		"Eradicate COVID-19",
		"Eradicate STDs",
		"Play video games with a touchpad",
		"Catch a fly with chopsticks",
		"Code minishell in one day",
	};
	std::cout << "FR4G-TP " << this->name << " attacks " << target
	<< " with the challenge: " << attack[rand() % 5] << std::endl;	
	
}
