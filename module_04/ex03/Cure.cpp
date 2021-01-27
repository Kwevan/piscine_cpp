#include "Cure.hpp"

Cure::Cure() :AMateria("cure")
{
}

Cure::~Cure() 
{}

Cure::Cure(const Cure &copy)
{
  *this = copy;
}

Cure &Cure::operator=(const Cure &copy) 
{
	this->_xp = copy.getXP();
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}


void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	AMateria::use(target);	
}
