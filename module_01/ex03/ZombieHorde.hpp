# ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include "Zombie.hpp"

class ZombieHorde
{
	public:
		ZombieHorde(int N);
		void		announce();
		~ZombieHorde();
	private:
		int			size;
		std::string randomName();
		Zombie		*zombies;
};

# endif
