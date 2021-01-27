#include "MateriaSource.hpp"

MateriaSource::MateriaSource() 
{
	(void)max;
	count = 0;
}

MateriaSource::~MateriaSource() 
{
	for (int i = 0; i < count; i++)
	{
    	delete inventory[i];
 	}
}

MateriaSource::MateriaSource(const MateriaSource &copy) 
{
  *this = copy;
}

MateriaSource  &MateriaSource::operator=(const MateriaSource &copy) 
{
	for (int i = 0; this->count; i++)
        delete this->inventory[i];
    this->count = copy.count;
    for (int i = 0; this->count; i++)
        this->inventory[i] = copy.inventory[i]->clone();
    return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (count >= max)
		return;
	inventory[count] = m;
	count++;
}

AMateria		*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < count; i++ )
	{
		if (inventory[i]->getType() == type)
			return inventory[i]->clone();
	}
	return 0;
}
