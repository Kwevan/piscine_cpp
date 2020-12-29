#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

void spaces(int n)
{
	for (int i = 0; i < n; i++)
		std::cout << std::endl;
}

int main()
{
	SuperTrap super("super");

	spaces(2);
	super.rangedAttack("T");
	super.meleeAttack("U");
	spaces(2);
}
