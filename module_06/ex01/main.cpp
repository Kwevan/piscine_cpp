#include <iostream>
#include <cstdlib>
#include <limits.h>


typedef struct	s_data
{
	char s1[8];
	int			i;
	char s2[8];
}				t_data;

char random_char()
{
	std::string s = "0123456789abcdefghijklmnopqrstuvwxyz";
	return (s[rand() % 36]);
}

void *serialize()
{
	t_data *data = new t_data;
	data->i = rand() % INT_MAX;
	for (int i = 0; i < 8; i++)
	{
		data->s1[i] = random_char();
		data->s2[i] = random_char();
	}
	return reinterpret_cast<void *>(data);
}

t_data *deserialize(void *value) {

	t_data *data = reinterpret_cast<t_data *>(value);

	return data;
}

void printArray(char s[8])
{
	for (int i = 0; i < 8 ; i++)
		std::cout << s[i];
	std::cout << std::endl;
}

int main()
{
	srand(time(NULL));

	void *ptr = serialize();


	s_data *data = deserialize(ptr);

	std::cout << "Deserialized data: \n\n";

	std::cout << "str1 : ";
	printArray(data->s1);
	std::cout << "int  : "<< data->i << "\n";
	std::cout << "str2 : ";
	printArray(data->s2);


	delete data;

	return (0);	
}
