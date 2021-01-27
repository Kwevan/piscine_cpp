#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;

	std::cout << "\n------------\n"<< std::endl;


	ICharacter* joe = new Character("joe");
	Ice *ice = new Ice();
	ice->use(*joe);

	std::cout << "\n------------\n"<< std::endl;

	IMateriaSource *source = new MateriaSource();
	source->learnMateria(ice);
	AMateria *t = source->createMateria("ice");

	joe->equip(t);

	Character *c = new Character("char");
	AMateria *mat = new Ice();
	c->equip(mat);
	Character *camille = c;
	c->use(0, *camille);
	camille->use(0, *c);

	
	std::cout << "\n------un equip------\n"<< std::endl;

	camille->unequip(0);
	camille->use(0, *c);

	delete c;
	return (0);
}
