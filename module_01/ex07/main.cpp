#include <iostream>
#include <cctype>
#include <fstream>
#include <iostream>
#include <sstream> 

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
	
	output_file = input_file;
	output_file += ".replace";

	std::ifstream t(input_file.c_str());
	std::stringstream buffer;

	if (!t.is_open() || !t.good())
		throw "can't open input file";	

	buffer << t.rdbuf();
	content = buffer.str();

	size_t pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos)
	{
		content.replace(pos, s1.length(), s2);
		pos+= s2.length();
	}
	std::ofstream out;
	out.open(output_file.c_str(), std::ofstream::trunc);
    out << content;
	if (!t.is_open() || !t.good())
		throw "can't open output file";
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
