#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <cstdlib>

class FragTrap
{
	public:
			FragTrap();
			FragTrap(std::string name);
			FragTrap(const FragTrap &copy);
			FragTrap &operator=(const FragTrap &copy);
			void rangedAttack(std::string const &target);
			void meleeAttack(std::string const &target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
			void vaulthunter_dot_exe(std::string const &target);		
			~FragTrap();
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
