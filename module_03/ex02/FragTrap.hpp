#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
			FragTrap();
			FragTrap(std::string name);
			FragTrap(const FragTrap &copy);
			FragTrap &operator=(const FragTrap &copy);
			void rangedAttack(std::string const &target);
			void meleeAttack(std::string const &target);
			void vaulthunter_dot_exe(std::string const &target);		
			~FragTrap();
	private:
};

#endif
