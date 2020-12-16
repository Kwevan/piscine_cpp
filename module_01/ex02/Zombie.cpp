#include "Zombie.hpp"

Zombie::Zombie()
{}

void Zombie::announce()
{
	std::string str;

	str = "<" + type;
	std::cout << str << std::endl;
}

Zombie::~Zombie()
{}
