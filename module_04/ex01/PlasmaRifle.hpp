#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>

class PlasmaRifle {
 public:
  PlasmaRifle();
  PlasmaRifle(std::string const & name, int apcost, int damage);
  PlasmaRifle(const PlasmaRifle &copy);
  ~PlasmaRifle();
  PlasmaRifle &operator=(const PlasmaRifle &copy);

 private:
};

#endif
