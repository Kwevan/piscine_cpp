#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include "HumanB.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon);
		void	attack();
		~HumanA();
	private:
		Weapon &w;
		std::string name;
};

#endif
