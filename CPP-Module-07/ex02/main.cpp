#include "Array.hpp"

#define COLOR_ONE	"\033[35m"
#define COLOR_TWO	"\033[33m"
#define COLOR_NO	"\033[0m"

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

	return (0);
}
