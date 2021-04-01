#include <iostream>
#include "whatever.hpp"

int		main(void)
{
	{
		int a(42);
		int b(35);

		std::cout << "a: " << a << " b: " << b << std::endl;
		std::cout << max< int >( a, b ) << std::endl;
		std::cout << min< int >( a, b ) << std::endl;
		swap < int >(&a, &b);
		std::cout << "a: " << a << " b: " << b << std::endl;
	}
	{
		std::string b = "Nani";
		std::string a = "Quimera";

		std::cout << "a: " << a << " b: " << b << std::endl;
		std::cout << ::max< std::string >( a, b ) << std::endl;
		std::cout << ::min< std::string >( a, b ) << std::endl;
		swap < std::string >(&a, &b);
		std::cout << "a: " << a << " b: " << b << std::endl;
	
	}


	return (0);
}
