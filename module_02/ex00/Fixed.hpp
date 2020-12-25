#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed();

		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &copy);

		void setRawBits(int const raw);
		int getRawBits(void) const;
		~Fixed();
	private:
		int value;
		static const int bits = 8;
};

#endif
