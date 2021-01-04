#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->name = name;
	this->title = title;
	std::cout << name << ", "<< title << ", is born!" << std::endl;
}

std::string Sorcerer::getName()
{
	return (this->name);
}

std::string Sorcerer::getTitle()
{
	return (this->title);
}

std::ostream& operator<<(std::ostream& out, Sorcerer &s)
{
	std::string intro;

	intro += "I am " + s.getName() + ", " + s.getTitle() + ", and I like ponies!";
	return (out << intro);
}

Sorcerer::~Sorcerer()
{
	std::cout << name << ", "<< title
		<< ", is dead. Consequences will never be the same!" << std::endl;
}
