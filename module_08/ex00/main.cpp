#include "easyfind.hpp"

void print(int i)
{
	std::cout << i << std::endl;
}

std::list <int> get_new_list()
{
	std::list<int> nList;

	nList.push_back(12);
	nList.push_back(13);
	nList.push_back(14);
	nList.push_back(14);
	return (nList);
}

int main()
{
	std::list<int> mList;
	
	mList = get_new_list();

	std::cout << "[ Displaying list content ]"<< "\n\n";
	for (std::list<int>::iterator it = mList.begin(); it != mList.end(); ++it)
	{
		print(*it);
	}

	std::cout << "\n[ Trying easyfind(..) ]\n";
	easyfind(mList, 13);
	std::cout << "[ easyfind returns: " << easyfind(mList, 13) << " ]\n\n\n";


	try
	{
		std::cout << "[ Trying easyfind(..) with a value that isn't inside of it ]\n\n" << 
		easyfind(mList, 123);
	}
	catch(const std::exception &e)
	{
		std::string msg;

		msg += "Error: ";
		msg += e.what();
		std::cout << msg << " !\n";
	}

}
