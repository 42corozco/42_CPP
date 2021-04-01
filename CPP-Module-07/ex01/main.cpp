#include "iter.hpp"

int	main(void)
{
	{
		int tab[] = {0, 1, 2, 3};

		std::cout << "test-> iter< char >(tab, 4, shout);" << std::endl;
		iter< int >(tab, 4, shout);
		std::cout << "test-> iter< char >(tab, 2, shout);" << std::endl;
		iter< int >(tab, 2, shout);
	}
	{
		char tab[] = {'a', 'b', 'c', 'd'};

		std::cout << "test-> iter< char >(tab, 4, shout);" << std::endl;
		iter< char >(tab, 4, shout);
		std::cout << "test-> iter< char >(tab, 2, shout);" << std::endl;
		iter< char >(tab, 4, shout);
	}
	return (0);
}
