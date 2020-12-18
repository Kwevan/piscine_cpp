#include "Zombie.hpp"
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	srand(time(NULL));
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;	
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie	*z = new Zombie(name, this->type);
	return (z);	
}

void	ZombieEvent::randomChump()
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

	Zombie random(names[rand() % 10], this->type);
	random.announce();
}

ZombieEvent::~ZombieEvent()
{}
