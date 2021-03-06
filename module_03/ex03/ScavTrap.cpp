#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3)
{
	srand(time(NULL));
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	*this = copy;
}


ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
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

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << this->name << " attacks " << target
	<< " at range, causing " << this->rangedAd  << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << this->name << " attacks " << target
	<< " in melee, causing " << this->meleeAd  << " points of damage!" << std::endl;
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
	std::cout << "SC4V-TP " << this->name << " attacks " << target
	<< " with the challenge: " << attack[rand() % 5] << std::endl;	
	
}
