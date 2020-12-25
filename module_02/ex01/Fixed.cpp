#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = value << this->bits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * (1 << this->bits));
}

Fixed	&Fixed::operator=(const Fixed &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = copy.getRawBits();
	return (*this);
}


void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

int Fixed::getRawBits(void) const
{
	return (this->value);
}

int Fixed::toInt(void) const
{
	return (this->value >> this->bits);
}

float Fixed::toFloat(void) const
{
	return  (float)(this->value) / (1  << this->bits);
}

Fixed::~Fixed()
{
	std::cout << "Destructor  called" << std::endl;
}

std::ostream&	operator<<(std::ostream& out, Fixed const &value)
{
	return (out << value.toFloat());
}
