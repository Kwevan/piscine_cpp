#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);

		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &copy);

		void setRawBits(int const raw);
		int		getRawBits(void) const;
		int		toInt(void) const;
		float	toFloat(void) const;
		~Fixed();
	private:
		int value;
		static const int bits = 8;
};

std::ostream& operator<<(std::ostream& os, Fixed const &value);


#endif
