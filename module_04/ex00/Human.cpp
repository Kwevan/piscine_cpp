#include "Human.hpp"

Human::Human()
{}

Human::Human(std::string name) : Victim(name) 
{
	std::cout << "Ouiiin" << std::endl;
}

Human::Human(const Human &copy)
{
	*this = copy;
}

Human &Human::operator=(const Human &copy)
{
	this->name = copy.name;
	return (*this);

}

void Human::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a purple frog!" << std::endl;
}

Human::~Human()
{
	std::cout << "[...] [I am dead]"<< std::endl;
}
