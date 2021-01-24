#include "Peon.hpp"

Peon::Peon()
{}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &copy)
{
	*this = copy;
}

Peon &Peon::operator=(const Peon &copy)
{
	this->name = copy.name;
	return (*this);

}

void Peon::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a pink pony!" << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark.."<< std::endl;
}
