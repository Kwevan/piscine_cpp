# ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <iomanip>

class Contact
{
	public:
		Contact();
		void fill();
		void partialDisplay();
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string login;
		std::string adress;
		std::string email;
		std::string number;
		std::string birthday;
		std::string favMeal;
		std::string color;
		std::string darkestSecret;

};

# endif
