#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify_from_pointer(Base * p)
{
	if(dynamic_cast<A*>(p))
    	std::cout << "A" << std::endl;
	else if(dynamic_cast<B*>(p))
    	std::cout << "B" << std::endl;
	else if(dynamic_cast<C*>(p))
    	std::cout << "C" << std::endl;
}

void identify_from_reference(Base &p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e) {}

	try
	{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch (std::exception &e) {}

	try
	{
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch (std::exception &e) {}
}

int main()
{
	A *a = new A;
	B *b = new B;
	C *c = new C;

	Base *n = new Base;
	
	identify_from_pointer(a);
	identify_from_pointer(b);
	identify_from_pointer(c);
	identify_from_pointer(n);
	identify_from_pointer(NULL);

	std::cout << "\n ------- \n\n";

	identify_from_reference(*a);
	identify_from_reference(*b);
	identify_from_reference(*c);
	identify_from_reference(*n);

	delete a;
	delete b;
	delete c;
	delete n;
	
}
