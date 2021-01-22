#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon(std::string name);
		Peon(const Peon &copy);
		Peon &operator=(const Peon &copy);

		virtual void getPolymorphed() const;
		virtual ~Peon();
	private:
		Peon();
		std::string name;
};

# endif
