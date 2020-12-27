#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>

class ScavTrap
{
	public:
			ScavTrap(std::string name);
			void rangedAttack(std::string const &target);
			void meleeAttack(std::string const &target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
			void challengeNewcomer(std::string const &target);


		
			~ScavTrap();
	private:
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
