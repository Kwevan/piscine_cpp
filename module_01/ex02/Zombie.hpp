# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public:
			Zombie();
			void announce();
			~Zombie();
	private:
			std::string name;
			std::string type;
};

# endif
