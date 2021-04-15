#include "Array.hpp"

#define COLOR_ONE	"\033[35m"
#define COLOR_TWO	"\033[33m"
#define COLOR_NO	"\033[0m"

class Test
{
	public:
		Test() : _n(35) {return;}
		int		getN() const {return (this->_n);}
		void	setN(int n) {this->_n = n;}

	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Test const & rhs ) { o << rhs.getN(); return o; }

int main(void)
{
	{
		std::cout << COLOR_TWO << "------------test1----------------" << COLOR_NO << std::endl;
		Array<char> test(6);

		test[0] = 'a';
		test[1] = 'b';
		test[2] = 'c';
		test[3] = 'd';
		test[4] = 'e';
		test[5] = 'f';
		for (unsigned int i = 0; i < test.size(); i++)
			std::cout << test[i] << std::endl;
		std::cout << COLOR_TWO << "------------_Array.size()----------------" << COLOR_NO << std::endl;
		std::cout << "Size : " << test.size() << std::endl;
	}
	{
		std::cout << COLOR_TWO << "------------test2----------------" << COLOR_NO << std::endl;
		Array<int> test(6);

		test[0] = 10;
		test[1] = 11;
		test[2] = 12;
		test[3] = 13;
		test[4] = 14;
		test[5] = 15;
		for (unsigned int i = 0; i < test.size(); i++)
			std::cout << test[i] << std::endl;
	}
	{
		std::cout << COLOR_TWO << "------------test3----------------" << COLOR_NO << std::endl;
		Array<std::string> test(3);

		test[0] = "Hola";
		test[1] = " como";
		test[2] = " estas";
		for (unsigned int i = 0; i < test.size(); i++)
			std::cout << test[i];
		std::cout << std::endl;
		try
		{
			test[35];
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << " Size limite: " << test.size() << std::endl;
		}
	}
	{
		std::cout << COLOR_TWO << "------------test4----------------" << COLOR_NO << std::endl;
		Array<std::string> test(10);

		test[0] = "Hola";
		test[1] = " como";
		test[2] = " estas";
		test[9] = " nani1";
		test[4] = " nani2";
		for (unsigned int i = 0; i < test.size(); i++)
			std::cout << test[i];
		std::cout << std::endl;
	}
	{
		std::cout << COLOR_TWO << "------------class----------------" << COLOR_NO << std::endl;
		Array<Test> test(3);
		test[1].setN(42);
		test[2].setN(55);

		for (unsigned int i = 0; i < test.size(); i++)
			std::cout << test[i] << std::endl;
		try
		{
			test[4].setN(55);
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << " Size limite: " << test.size() << std::endl;
		}
	}
	return (0);
}
