#include <iostream>
#include <cctype>
#include <fstream>
#include <iostream>
#include <sstream> 

std::string ft_up(std::string str)
{
	for(size_t i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
	return (str);
}

void work(int ac, char **av)
{
	if (ac != 4)
		throw "Usage: ./replace filename s1 s2";

	std::string s1;
	std::string s2;
	std::string content;
	std::string input_file;
	std::string output_file;

	input_file = av[1];
	s1 = av[2];
	s2 = av[3];

	if (!s1.length() || !s2.length())
		throw "s1 or s2 is empty";	
	
	output_file = ft_up(input_file) += ".replace";
	std::ifstream t(input_file);
	std::stringstream buffer;

	if (!t.is_open() || !t.good())
		throw "can't open file";	

	buffer << t.rdbuf();
	content = buffer.str();

	size_t pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos)
	{
		content.replace(pos, s1.length(), s2);
		pos+= s2.length();
	}

	std::ofstream out(output_file);
    out << content;
    out.close();	
}


int main(int ac, char **av)
{
    try
	{
		work(ac, av);
	}
	catch(const char *error)
	{
		std::cerr << "Error: " << error << std::endl;
		return (1);
	}
	return (0);
}
