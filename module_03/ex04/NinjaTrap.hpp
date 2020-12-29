#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	public:
			NinjaTrap(std::string name);
			void rangedAttack(std::string const &target);
			void meleeAttack(std::string const &target);
			void ninjaShoebox(FragTrap &target);
			void ninjaShoebox(ScavTrap &target);
			void ninjaShoebox(NinjaTrap &target);
			~NinjaTrap();
	private:
};

#endif
