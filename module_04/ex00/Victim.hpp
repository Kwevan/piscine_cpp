#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim
{
	protected:
		Victim();
		std::string name;
	public:
		Victim(std::string name);
		Victim(const Victim &copy);
		Victim &operator=(const Victim &copy);
		std::string getName();
		virtual void getPolymorphed() const;
		virtual ~Victim();
	private:
};

std::ostream &operator<<(std::ostream& os, Victim &v);

# endif
