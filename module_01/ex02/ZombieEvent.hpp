# ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <iostream>

class ZombieEvent
{
	public:
			ZombieEvent();
			ZombieEvent(std::string name, std::string type);
			void	setZombieType(std::string type);
			Zombie *newZombie(std::string name);
			void	randomChump();
			~ZombieEvent();
	private:
			std::string type;
};

# endif
