#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() 
{}

PlasmaRifle::~PlasmaRifle() 
{}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &copy) 
{
  *this = copy;
}

PlasmaRifle  &PlasmaRifle::operator=(const PlasmaRifle &copy) 
{
  return (*this);
}
