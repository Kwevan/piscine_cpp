# include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : w(weapon)
{
	this->name = name;
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->w.getType() << std::endl;
}

HumanA::~HumanA()
{}
