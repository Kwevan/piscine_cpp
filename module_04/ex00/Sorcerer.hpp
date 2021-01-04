#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>

class Sorcerer
{
	public:
		Sorcerer(std::string name, std::string title);
		std::string getName();
		std::string getTitle();
		~Sorcerer();
	private:
		std::string name;
		std::string title;
};

std::ostream &operator<<(std::ostream& os, Sorcerer &s);

# endif
