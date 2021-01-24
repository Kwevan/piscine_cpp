#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include "Victim.hpp"

class Human : public Victim
{
	public:
		Human(std::string name);
		Human(const Human &copy);
		Human &operator=(const Human &copy);

		void getPolymorphed() const;
		virtual ~Human();
	private:
		Human();
		std::string name;
};

# endif
