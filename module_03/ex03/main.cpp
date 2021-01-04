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

	FragTrap bilbo("Anastasia");
	ScavTrap gandalf("Gandalf");
	NinjaTrap t("Jean Baptiste Grenouille");
	NinjaTrap e("Bilbo");

	spaces(2);

	t.ninjaShoebox(e);

	spaces(2);

	t.ninjaShoebox(bilbo);
	
	spaces(2);

	t.ninjaShoebox(gandalf);

	spaces(2);
}
