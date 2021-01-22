#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{}

Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->name = name;
	this->title = title;
	std::cout << name << ", "<< title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &copy)
{
	*this = copy;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &copy)
{
	this->name = copy.name;
	this->title = copy.title;
	return (*this);

}

std::string Sorcerer::getName()
{
	return (this->name);
}

std::string Sorcerer::getTitle()
{
	return (this->title);
}

void Sorcerer::polymorph(Victim const &v)
{
	v.getPolymorphed();
}

std::ostream& operator<<(std::ostream& out, Sorcerer &s)
{
	std::string intro;

	intro += "I am " + s.getName() + ", " + s.getTitle() + ", and I like ponies!";
	return (out << intro << std::endl);
}

Sorcerer::~Sorcerer()
{
	std::cout << name << ", "<< title
		<< ", is dead. Consequences will never be the same!" << std::endl;
}
