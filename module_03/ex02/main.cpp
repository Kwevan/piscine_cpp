#include "FragTrap.hpp"
#include "ScavTrap.hpp"

void spaces(int n)
{
	for (int i = 0; i < n; i++)
		std::cout << std::endl;
}

int main()
{

	FragTrap f("Bilbo");

	spaces(2);

	f.rangedAttack("Smaug");
	f.meleeAttack("Serpent of Slytherin");

	spaces(2);

	f.takeDamage(50);
	f.takeDamage(10);
	f.takeDamage(100);
	f.takeDamage(100);

	spaces(2);

	f.beRepaired(80);
	f.beRepaired(180);

	spaces(2);

	f.vaulthunter_dot_exe("Envy");
	f.vaulthunter_dot_exe("Lust");
	f.vaulthunter_dot_exe("Greed");
	f.vaulthunter_dot_exe("Pride");

	spaces(2);
	
	f.vaulthunter_dot_exe("Glutony");
	f.vaulthunter_dot_exe("Pidgey");
	f.vaulthunter_dot_exe("Charmander");

	spaces(2);

	ScavTrap s("Gandalf");
	s.challengeNewcomer("Sonmi-451");
	s.challengeNewcomer("Simba");
	s.challengeNewcomer("Harry");
	s.challengeNewcomer("Neo");

	spaces(2);
}
