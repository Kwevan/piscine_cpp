#include <iostream>
# include <iomanip>
# include <cmath>
# include <iomanip>

void	ft_convert_to_char(double value, bool is_ok)
{
	std::cout << "char: ";
	if (is_ok && !std::isnan(value))
	{
		char c =  static_cast<char>(value);
		if (std::isprint(c))
			std::cout << c << std::endl;	
		else
			std::cout << "Non displayable" << std::endl;
	}
	else
		std::cout << " impossible" << std::endl;
	
}


void	ft_convert_to_int(double value, bool is_ok)
{
	std::cout << "int: ";
	if (is_ok && value <= INT_MAX && value >= INT_MIN )
			std::cout << static_cast<int>(value)  << std::endl;
	else
		std::cout << " impossible" << std::endl;

}

void    ft_convert_to_float(double value, bool is_ok)
{
    std::cout << "float: ";
    if (is_ok)
       std::cout << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
    else
        std::cout << " impossible" << std::endl;

}

void    ft_convert_to_double(double value, bool is_ok)
{
    std::cout << "double: ";
    if (is_ok)
       std::cout << std::fixed << std::setprecision(1) << static_cast<double>(value) << std::endl;
    else
        std::cout << " impossible" << std::endl;

}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./convert TYPE_SOMETHING" << std::endl;
		return (1);	
	}

	double value;
	bool is_ok = true;
	try
	{
		value = std::stod(av[1]);
		(void)value;
	}
	catch (std::exception &e) 
	{
		is_ok = false;
	}
	ft_convert_to_char(value, is_ok);
	ft_convert_to_int(value, is_ok);
	ft_convert_to_float(value, is_ok);
	ft_convert_to_double(value, is_ok);
	return (0);
}
