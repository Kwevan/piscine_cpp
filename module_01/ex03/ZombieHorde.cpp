#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	this->size = N;
	this->zombies = new Zombie[N];

	srand(time(NULL));
	for (int i = 0; i < this->size; i++)
	{
		this->zombies[i].setType("Human");
		this->zombies[i].setName(randomName());
	}
}

std::string ZombieHorde::randomName()
{
	std::string names[10] =
 	{
		"Meliodas",
		"Diane",
		"King",
		"Growther",
		"Melascula",
		"Zeldris",
		"Ban",
		"Urgot",
		"Hasagi",
		"Sonmi-451",
};

	return (names[rand() % 10]);
}

void ZombieHorde::announce()
{
	for(int i = 0; i < this->size; i++)
	{
		this->zombies[i].announce();
	}
}

ZombieHorde::~ZombieHorde()
{
	delete []this->zombies;
}
