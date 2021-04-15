#include "iter.hpp"

#define COLOR_ONE	"\033[35m"
#define COLOR_TWO	"\033[33m"
#define COLOR_NO	"\033[0m"

class Test
{
	public:
		Test() : _n(35) {return;}
		int getN() const {return (this->_n);}

	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Test const & rhs ) { o << rhs.getN(); return o; }

int	main(void)
{
	{
		std::cout << COLOR_TWO << "------------Tab int-----------------" << COLOR_NO << std::endl;
		int tab[] = {0, 1, 2, 3};

		std::cout << "test-> iter< int >(tab, 4, shout);" << std::endl;
		iter< int >(tab, 4, shout);
		std::cout << "test-> iter< int >(tab, 2, shout);" << std::endl;
		iter< int >(tab, 2, shout);
	}
	{
		std::cout << COLOR_TWO << "------------tab char----------------" << COLOR_NO << std::endl;
		char tab[] = {'a', 'b', 'c', 'd'};

		std::cout << "test-> iter< char >(tab, 4, shout);" << std::endl;
		iter< char >(tab, 4, shout);
		std::cout << "test-> iter< char >(tab, 2, shout);" << std::endl;
		iter< char >(tab, 2, shout);
	}
	{
		std::cout << COLOR_TWO << "------------tab class----------------" << COLOR_NO << std::endl;
		Test tab[4];

		std::cout << "test-> iter< Test >(tab, 4, shout);" << std::endl;
		iter<Test>( tab, 4, shout );
		std::cout << "test-> iter< Test >(tab, 4, shout);" << std::endl;
		iter<Test>( tab, 2, shout );
	}
	return (0);
}
