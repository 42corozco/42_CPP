#include <iostream>
#include <string>

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error: argument." << std::endl;
		return (1);
	}
	return (0);
}
