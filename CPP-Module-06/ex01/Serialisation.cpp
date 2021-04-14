#include <string>
#include <ctime>
#include <cstdlib>
#include <iostream>

struct	Data
{
	std::string s1;
	int n;
	std::string s2;
};

void	*serialize(void)
{
	Data *seri = new Data();
	std::string tmp= "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789abcdefghijklmnopqrstuvwxy";

	for (int i = 0; i < 8; i++)
		seri->s1 += tmp[rand() % 61];
	seri->n = rand() % 100000;
	for (int i = 0; i < 8; i++)
		seri->s2 += tmp[rand() % 61];

	std::cout << "serialized: " << seri->s1 << std::endl;
	std::cout << "serialized: " << seri->n << std::endl;
	std::cout << "serialized: " << seri->s2 << std::endl;
	return (reinterpret_cast<void *>(seri));
}

Data	*deserialize(void * raw)
{
	return reinterpret_cast<Data *>(raw);
}

int		main(void)
{
	srand(time(NULL));

	void *data = serialize();
	Data *tmp = deserialize(data);

	std::cout << "s1: " << tmp->s1 << std::endl;
	std::cout << "n: " << tmp->n << std::endl;
	std::cout << "s2: " << tmp->s2 << std::endl;

	delete tmp;
	return (0);
}
