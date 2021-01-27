#include "Character.hpp"

Character::Character() 
{
	this->count = 0;
}
Character::Character(std::string name)
{
	for (int i = 0; i < max; i++)
		inventory[i] = NULL;
	this->name = name;
	this->count = 0;
}

Character::~Character() 
{
	for (int i = 0; i < count; i++)
		delete inventory[i];

}

Character::Character(const Character &copy) 
{
  *this = copy;
}

Character  &Character::operator=(const Character &copy) 
{
	for (int i = 0; this->count; i++)
		delete this->inventory[i];
	this->count = copy.count;
	for (int i = 0; this->count; i++)
		this->inventory[i] = copy.inventory[i]->clone();
	return (*this);
}

std::string	const  &Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria* m)
{
	if(this->count >= 4)
		return ;
	inventory[this->count] = m;
	this->count++;
}

void				Character::unequip(int idx)
{
	if (count == 0 || idx >= max || idx < 0)
		return ;
	for (int i = 0; i < count; i ++)
	{
		if (i != idx)
		inventory[i] = inventory[i];
	}
	count--;
}

void				Character::use(int idx, ICharacter &target)
{
if ( count == 0 || (idx - 1) > count || idx < 0)
		return ;
	inventory[idx]->use(target);
}
