#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure &copy);
		~Cure();
		Cure &operator=(const Cure &copy);
		
	AMateria *clone() const;
	void use(ICharacter &target);
	private:
	unsigned int _xp;
};

#endif
