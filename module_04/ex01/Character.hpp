#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {
	public:
		Character();
		Character(std::string const &name);
		Character(const Character &copy);
		~Character();
		Character &operator=(const Character &copy);
		void recoverAP();
		void equip(AWeapon *);
		void attack(Enemy *);
		std::string getName() const;
		AWeapon *getWeapon();
		int getAp();
	private:
		std::string name;
		int ap;
		AWeapon *weapon;
};

std::ostream &operator<<(std::ostream& os, Character &c);


#endif
