#include "iter.hpp"

int	main(void)
{
	{
		int tab[] = {0, 1, 2, 3};

		iter< int >(tab, 4, shout);
		iter< int >(tab, 2, shout);
	}
	{
//		int tab[] = {0, 1, 2, 3};

//		iter< int >(tab, 9, shout);
	}
	return (0);
}
