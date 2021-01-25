#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class Squad : public ISquad
{
 public:
  Squad();
  Squad(const Squad &copy);
  ~Squad();
  Squad &operator=(const Squad &copy);
  int getCount() const;
  ISpaceMarine *getUnit(int N) const;
  int		push(ISpaceMarine *item);
 private:
	int count;
	int size;
	ISpaceMarine *marines[5];

};

#endif
