#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		void	setWeapon(Weapon &weapon);
		void	attack();
		~HumanB();
	private:
		Weapon *w;
		std::string name;
};

#endif
