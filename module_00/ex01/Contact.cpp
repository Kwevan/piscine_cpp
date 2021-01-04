#include "Contact.hpp"

Contact::Contact()
{
	//I am the destructor of this class
}

void Contact::fill2(std::string field, std::string *attribute)
{
	do
	{
		std::cout << field;
		getline(std::cin, *attribute);
	}
	while ((*attribute).empty());
}
void Contact::fill(int i)
{
	this->index = i;
	fill2("First Name: ", &this->firstName);
	fill2("Last Name: ", &this->lastName);
	fill2("Nickname: ", &this->nickname);
	fill2("Postal Address: ", &this->address);
	fill2("Email Address: ", &this->email);
	fill2("Phone Number: ", &this->number);
	fill2("Birthday Date: ", &this->birthday);
	fill2("Favorite Meal: ", &this->favMeal);
	fill2("Underwear Color: ", &this->color);
	fill2("Darkest Secret: ", &this->darkestSecret);
}

std::string Contact::format(std::string str)
{
	std::string res;
	res = str;
	if (res.size() > 10)
	{
		res  = res.substr(0, 9);
		res  += '.';
	}
	return (res);

}
void Contact::printFormated(std::string field1, std::string field2, std::string field3, std::string field4)
{
	std::cout << std::setw(10) << field1 << "|";
	std::cout << std::setw(10) << field2 << "|";
	std::cout << std::setw(10) << field3 << "|";
	std::cout << std::setw(10) << field4 << "|" << std::endl;
}

void Contact::partialDisplay()
{
	std::stringstream s;

	s << this->index;
	printFormated("INDEX", "FIRST NAME", "LAST NAME", "NICKNAME");
	printFormated(s.str(), format(this->firstName), format(this->lastName), format(this->nickname));
	
}

void Contact::fullDisplay()
{
	std::cout << "First Name: " << firstName << std::endl;
	std::cout << "Last Name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Postal Address: " << address << std::endl;
	std::cout << "Email Address: " << email << std::endl;
	std::cout << "Phone Number: " << number << std::endl;
	std::cout << "Birthday Date: " << birthday << std::endl;
	std::cout << "Favorite Meal: " << favMeal << std::endl;
	std::cout << "underwear Color: " << color << std::endl;
	std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}

Contact::~Contact()
{
	//I am the destructor of this class
}
