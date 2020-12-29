#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5)
{
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
