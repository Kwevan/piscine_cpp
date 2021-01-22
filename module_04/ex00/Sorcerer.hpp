#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(const Sorcerer &copy);
		Sorcerer &operator=(const Sorcerer &copy);
		std::string getName();
		std::string getTitle();
		void polymorph(Victim const &v);
		~Sorcerer();
	private:
		Sorcerer();
		std::string name;
		std::string title;
};

std::ostream &operator<<(std::ostream& os, Sorcerer &s);

# endif
