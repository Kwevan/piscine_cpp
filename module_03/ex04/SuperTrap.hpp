#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : virtual public FragTrap, virtual public NinjaTrap
{
	public:
			SuperTrap();
			SuperTrap(std::string name);
			SuperTrap(const SuperTrap &copy);
			SuperTrap &operator=(const SuperTrap &copy);
			void rangedAttack(std::string const &target);
			void meleeAttack(std::string const &target);
			~SuperTrap();
	private:
};

#endif
