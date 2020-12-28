#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0)
{
	srand(time(NULL));
	std::cout << "NinjaTrap constructor called" << std::endl;
}

void NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << "NINJA-TP " << this->name << " attacks " << target
	<< " at range, causing " << this->rangedAd  << " points of damage!" << std::endl;
}

void NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << "NINJA-TP " << this->name << " attacks " << target
	<< " in melee, causing " << this->meleeAd  << " points of damage!" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	if (this->energy < 25)
	{
		std::cout << this->name << " can't cast any more spells, not enough energy. got: " << this->energy << ", requires 25." << std::endl;	
		return ;
	}
	std::cout << "NINJA-TP " << this->name << " attacks " << target.name
	<< " with: " << "Open the Ninja Shoe Box"
	<< std::endl << "[...] ouch" << std::endl;	
	
	this->energy -= 25;
}

void NinjaTrap::ninjaShoebox(FragTrap &target)
{
	std::cout << this->name << " throws a Shuriken at " << target.name << std::endl << "[...] ouch" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	std::cout << this->name << " throws a Sushi at " << target.name << std::endl << "[...] ouch" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap destructor called" << std::endl;
}
