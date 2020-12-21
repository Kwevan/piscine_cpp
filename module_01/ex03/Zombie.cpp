#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
}

void Zombie::announce()
{
	std::string str;

	str = "<" + name + " (" + type + ")>";
	std::cout << str << std::endl;
}

void Zombie::setType(std::string type)
{
	this->type = type;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{}
