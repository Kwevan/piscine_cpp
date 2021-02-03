#include "whatever.hpp"
#include <iostream>

int main()
{

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min( a, b ) << std::endl;
	std::cout << "max(a, b) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min( c, d ) << std::endl;
	std::cout << "max(c, d) = " << ::max( c, d ) << std::endl;


	std::cout << "\n------------------\n";

	int i = 1;
	int j = 1;

	double k = 456.65;
	double l = 456.60;

	float m = 23.98;
	float n = 456.0;

	char o = 'c';
	char p = 'd';
	
	std::cout << "min = "<< min(i, j) << std::endl;
	std::cout << "min = " << min(k, l) << std::endl;
	std::cout << "min = " << min(m, n) << std::endl;
	std::cout << "min = " << min(o, p) << std::endl;
}
