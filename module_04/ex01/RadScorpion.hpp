#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
 public:
  RadScorpion();
  RadScorpion(const RadScorpion &copy);
  virtual ~RadScorpion();
  RadScorpion &operator=(const RadScorpion &copy);

 private:
};

#endif
