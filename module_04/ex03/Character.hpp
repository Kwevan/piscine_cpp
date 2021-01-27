#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

class Character : public ICharacter
{
 public:
  Character();
  Character(std::string name);
  Character(const Character &copy);
  ~Character();
  Character &operator=(const Character &copy);

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	private:
		std::string			name;
		AMateria			*inventory[4];
		int					count;
		static const int	max = 4;
};

#endif
