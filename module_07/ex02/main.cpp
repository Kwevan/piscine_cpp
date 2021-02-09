#include "Array.hpp"

int main()
{
    Array<int> emptyArr;
	std::cout << "size of emptyArr is: " << emptyArr.size() << "\n\n";
    
	Array<int> arrInt = Array<int>(2);

	try
	{
		std::cout << "trying to access out of bounds element of arrInt";
		std::cout << arrInt[10];
	}
	catch(std::exception &e)
	{
		std::cerr << "Error: " << e.what() << "\n\n";
	}
    Array<double> arrDouble = Array<double>(4);
	arrDouble[0] = 5;
	std::cout << "size of arrDouble is: " << arrDouble.size() << std::endl;
	std::cout << "arrDouble[0] is: " << arrDouble[0] << "\n\n";



	Array<int> arr = Array<int>(2);

	arr[0] = 444;
	arr[1] = 555;
	std:: cout << "array 1 [ before ] modification of array 2:\n";
	arr.print();
	Array<int> arr2 = arr;

	std:: cout << "array 2 [ before ] modification of himself:\n";
	arr2.print();

	arr2[0] = 91;
	arr2[1] = 92;
	
	std:: cout << "array 1 [ after ] modification of array2:\n";
	arr.print();
	std:: cout << "array 2 [ after ] modification of himself:\n";
	arr2.print();
}
