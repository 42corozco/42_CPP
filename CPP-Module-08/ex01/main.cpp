#include "span.hpp"

#define COLOR_ONE	"\033[35m"
#define COLOR_TWO	"\033[33m"
#define COLOR_NO	"\033[0m"

int	main()
{
	{
		std::cout << COLOR_TWO << "------------test1----------------" << COLOR_NO << std::endl;
		std::cout << "Test -> original\n" << std::endl;
		Span sp = Span(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << COLOR_TWO << "------------test2----------------" << COLOR_NO << std::endl;
		std::cout << "Test -> exception\n" << std::endl;
		Span sp = Span(3);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);

		sp.print_sp();
		try
		{
			sp.addNumber(11);
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << COLOR_TWO << "------------test3----------------" << COLOR_NO << std::endl;
		std::cout << "Test -> exception 0/1 arg\n" << std::endl;
		Span sp = Span(3);
		try
		{
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}
