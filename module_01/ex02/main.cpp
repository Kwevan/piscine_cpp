# include "Zombie.hpp"
# include "ZombieEvent.hpp"

int		main(void)
{
	Zombie z;

	z.setName("Sam");
	z.setType("Dog");

	z.announce();

	ZombieEvent e;
	e.setZombieType("Homonculus");

	Zombie *zombie_on_heap = e.newZombie("Gluttony");
	zombie_on_heap->announce();
	delete zombie_on_heap;

	e.randomChump();	
	e.randomChump();	
	e.randomChump();	

}
