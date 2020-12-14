#include <iostream>

void	ft_print(std::string str)
{
	for (int i = 0; str[i]; i++)
		std::cout << (char)toupper(str[i]);
}

int		main(int ac, char **av)
{
	std::string no_args_str = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

	if (ac == 1)
		ft_print(no_args_str);
	for (int i = 1; av[i]; i++)
		ft_print(av[i]);
	std::cout <<  std::endl;
	return (0);
}
