#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include <iostream>

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &copy);
		~MateriaSource();
		MateriaSource &operator=(const MateriaSource &copy);

	void		learnMateria(AMateria *m);
	AMateria	*createMateria(std::string const &type);

	private:
		AMateria *inventory[4];
		static const int max = 4;
		int count;
};

#endif
