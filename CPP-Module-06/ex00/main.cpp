#include "Conversion.hpp"

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error: argument." << std::endl;
		return (1);
	}
	Conversion ret(av[1]);

	ret.convertToChar();
	ret.convertToInt();
	ret.convertToFloat();
	ret.convertToDouble();

	return (0);
}
