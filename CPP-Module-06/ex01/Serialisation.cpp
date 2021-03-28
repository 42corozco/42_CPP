#include <string>
#include <time.h>
#include <stdlib.h>
#include <iostream>

struct	Data
{
	std::string s1;
	int n;
	std::string s2;
};

void	*serialize(void)
{

}

Data	*deserialize(void * raw)
{

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
