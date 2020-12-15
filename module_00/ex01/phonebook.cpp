#include "contact.hpp"

int		ft_search(Contact *contacts, int *count)
{
	for (int i = 0; i < *count; i++)
	{
		contacts[i].partialDisplay();
	}
	return (2);
}

int		ft_add(Contact *contacts, int *count)
{
	if ((*count) >= 8)
	{
		std::cout << "phonebook$ " << "Memory Full" << std::endl;
		return (1);
	}
	contacts[*(count)].fill();
	*(count) += 1;
	std::cout << "phonebook$ " << "New contact successfully added: " << std::endl;
	return (1);
}

int		ft_check_input(std::string input, Contact *contacts, int *count)
{
		if (input ==  "ADD")
			return (ft_add(contacts, count));
		else if (input == "SEARCH")
			return (ft_search(contacts, count));
		else if (input == "EXIT")
			return (3);
		std::cout << "Usage: ADD, SEARCH or EXIT" << std::endl;	
		return (0);
}

int		main(void)
{
	std::string input;
	Contact contacts[8];
	int count;

	count = 0;
	std::cout << "Usage: ADD, SEARCH or EXIT" << std::endl;	
	while (true)
	{
		std::cout << "phonebook$ " ;
		getline(std::cin, input);
		if (ft_check_input(input, contacts, &count) == 3)
			break;
	}
}

