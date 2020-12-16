# ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
	public:
		Contact();
		void fill(int i);
		void partialDisplay();
		void fullDisplay();
		~Contact();
	private:
		int         index;
		std::string firstName;
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
		std::string format(std::string str);
		void printFormated(std::string f1, std::string f2, std::string f3, std::string f4);
};

# endif
