#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;


/*	Enemy e(19, "enemy");
	SuperMutant s;
	s.takeDamage(8);	
	RadScorpion r ;
	RadScorpion r2 ;
	r.takeDamage(10);

	PlasmaRifle pr;

	Character c("Character");
	std::cout << c;
	c.equip(&pr);
	std::cout << c;
	c.attack(&r);
	c.attack(&r);
	c.attack(&r);
	c.attack(&r2);
	c.attack(&r2);
	c.attack(&r2);
	c.attack(&s);
	c.attack(&s);
	c.attack(&s);
	std::cout << c.getName() << " has "<< c.getAp() << " AP" << std::endl;
*/
}
