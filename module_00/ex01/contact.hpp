# ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
	public:
		Contact();
		void fill(int i);
		void partialDisplay();
		void displayAttr();
	private:
		int			index;
		std::string	firstName;
		std::string lastName;
		std::string nickname;
		std::string login;
		std::string address;
		std::string email;
		std::string number;
		std::string birthday;
		std::string favMeal;
		std::string color;
		std::string darkestSecret;

		void fill2(std::string field, std::string *attr);
///		void printFormated();
};

# endif
