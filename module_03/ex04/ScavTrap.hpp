#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
			ScavTrap(std::string name);
			void rangedAttack(std::string const &target);
			void meleeAttack(std::string const &target);
			void challengeNewcomer(std::string const &target);


		
			~ScavTrap();
	private:
};

#endif
