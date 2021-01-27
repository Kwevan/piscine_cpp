#include "AMateria.hpp"

AMateria::AMateria() 
{
	this->_xp = 0;
}

AMateria::AMateria(std::string const & type) 
{
	this->_type = type;
}

AMateria::~AMateria() 
{}

AMateria::AMateria(const AMateria &copy) 
{
  *this = copy;
}

AMateria  &AMateria::operator=(const AMateria &copy) 
{
	this->_xp = copy.getXP();
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

unsigned int	AMateria::getXP() const
{
	return (this->_xp);
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
	this->_xp += 10;
}
