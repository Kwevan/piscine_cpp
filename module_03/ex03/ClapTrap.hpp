#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <cstdlib>

class ClapTrap
{
	public:
			ClapTrap();
			ClapTrap(std::string name, int hp, int maxHp, int energy, int maxEnergy, int lvl, int meleeAd, int rangedAd, int armorReduc);
			ClapTrap(const ClapTrap &copy);
			ClapTrap &operator=(const ClapTrap &copy);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
			~ClapTrap();
			std::string		name;
			unsigned int	hp;
			unsigned int	maxHp;
			unsigned int	energy;
			unsigned int	maxEnergy;
			unsigned int	lvl;
			unsigned int	meleeAd;
			unsigned int	rangedAd;
			unsigned int	armorReduc;
};

#endif
