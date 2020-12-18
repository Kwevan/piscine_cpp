# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public:
			Zombie();
			Zombie(std::string name, std::string type);
			void announce();
			void setType(std::string type);
			void setName(std::string name);
			~Zombie();
	private:
			std::string name;
			std::string type;
};

# endif
