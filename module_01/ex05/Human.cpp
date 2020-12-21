#include "Human.hpp"

Human::Human()
{}

std::string Human::identify()
{
	return(this->brain.identify());
}

const Brain &Human::getBrain()
{
	return(this->brain);
}

Human::~Human()
{}
