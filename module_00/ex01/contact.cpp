#include "contact.hpp"

Contact::Contact()
{}

void Contact::fill()
{
	std::cout << "First Name: ";
	getline(std::cin, this->firstName);

	std::cout << "Last Name: ";
	getline(std::cin, this->lastName);

	std::cout << "Nickname: ";
	getline(std::cin, this->nickname);

	std::cout << "login: ";
	getline(std::cin, this->login);

	std::cout << "Postal Adress: ";
	getline(std::cin, this->adress);

	std::cout << "Email Adress: ";
	getline(std::cin, this->email);

	std::cout << "Phone Number: ";
	getline(std::cin, this->number);

	std::cout << "Birthday Date: ";
	getline(std::cin, this->birthday);

	std::cout << "Favorite Meal: ";
	getline(std::cin, this->favMeal);

	std::cout << "Underwear Color: ";
	getline(std::cin, this->color);

	std::cout << "Darkest Secret: ";
	getline(std::cin, this->darkestSecret);
}

void Contact::partialDisplay()
{
//index, firstname, last name, nickname

	std::cout << std::setw(20) <<"index : todo" << "|";
	std::cout << "First Name :" << std::setw(2) << this->firstName << std::endl;
}
