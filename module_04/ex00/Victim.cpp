#include "Victim.hpp"

Victim::Victim()
{}

Victim::Victim(std::string name)
{
	this->name = name;
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &copy)
{
	*this = copy;
}

Victim &Victim::operator=(const Victim &copy)
{
	this->name = copy.name;
	return (*this);

}

std::string Victim::getName()
{
	return (this->name);
}

void Victim::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream& operator<<(std::ostream& out, Victim &s)
{
	std::string intro;

	intro += "I'm " + s.getName() + " and I like otters!" ;
	return (out << intro << std::endl);
}

Victim::~Victim()
{
	std::cout << "Victim " << this->name << " just died for no apparent reason!" << std::endl;
}
