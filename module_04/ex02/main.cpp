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
	ISquad* is3(is);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
			ISpaceMarine* cur = is->getUnit(i);
			std::cout << i << " - ";
			cur->battleCry();
	}
	delete(is);

	ISpaceMarine* c = new AssaultTerminator;
	Squad s;
	s.push(c);
	s.getUnit(0)->battleCry();;
	Squad t = s;
	t.getUnit(0)->battleCry();;
	return (0);
}
