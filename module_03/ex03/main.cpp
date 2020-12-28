#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

void spaces(int n)
{
	for (int i = 0; i < n; i++)
		std::cout << std::endl;
}

int main()
{

	FragTrap bilbo("Bilbo");
	ScavTrap gandalf("Gandalf");
	NinjaTrap t("Edward");

	spaces(2);

	t.ninjaShoebox(t);

	spaces(2);

	t.ninjaShoebox(bilbo);
	
	spaces(2);

	t.ninjaShoebox(gandalf);

	spaces(2);
}
