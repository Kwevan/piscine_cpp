#include "ISquad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i) {
			ISpaceMarine* cur = vlc->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
	}
	delete vlc;


	std::cout << "\n[ end of subject's main ]\n" << std::endl;


	ISpaceMarine* boby = new TacticalMarine;
	ISpaceMarine* cocy = new AssaultTerminator;

	ISquad* is = new Squad;
	is->push(boby);
	is->push(cocy);
	ISquad* is2 = is;
	for (int i = 0; i < vlc->getCount(); ++i)
	{
			ISpaceMarine* cur = is->getUnit(i);
			std::cout << i <<" - ";
			cur->battleCry();

	}
	
	std::cout << "\n[ p2 ]\n" << std::endl;

	ISquad* is3(is);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
			ISpaceMarine* cur = is->getUnit(i);
			std::cout << i << " - ";
			cur->battleCry();
	}
	(void)is3;
	(void)is2;
	delete(is);
	
	std::cout << "\n[ p3 ]\n" << std::endl;

	ISpaceMarine* c = new AssaultTerminator;
	ISpaceMarine* tactical = new TacticalMarine;
	Squad *s = new Squad;
	s->push(c);
	s->getUnit(0)->battleCry();;
	Squad *t = s;
//	Squad *t = new Squad;
//	t = s;
	t->push(tactical);
	t->getUnit(0)->battleCry();
	t->getUnit(1)->battleCry();
	delete(s);

	return (0);

}
