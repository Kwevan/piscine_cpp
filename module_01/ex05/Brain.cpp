#include "Brain.hpp"

Brain::Brain()
{}

std::string Brain::identify() const
{
	std::stringstream ss;
	ss << this;
	return (ss.str());
}

Brain::~Brain()
{}
