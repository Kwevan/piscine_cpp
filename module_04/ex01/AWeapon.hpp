#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>
class AWeapon
{
	private:

	protected:
		AWeapon();
		std::string name;
		int apcost;
		int damage;

	public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(const AWeapon &copy);
	AWeapon &operator=(const AWeapon &copy);
	virtual ~AWeapon();
	virtual std::string getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};

#endif
