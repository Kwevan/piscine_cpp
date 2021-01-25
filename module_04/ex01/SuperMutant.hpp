#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
 public:
  SuperMutant();
  SuperMutant(const SuperMutant &copy);
  virtual ~SuperMutant();
  SuperMutant &operator=(const SuperMutant &copy);
   void takeDamage(int dmg);
 private:
};

#endif
