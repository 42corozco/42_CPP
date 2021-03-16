#include "Bureaucrat.hpp"

int		main(void)
{
	{
		std::cout << "------------test1----------------" << std::endl;
		std::cout << "Test -> copy constructor and operator '='\n" << std::endl;
		Bureaucrat test1("Quimera", 1);
		Bureaucrat test2(test1);
		Bureaucrat test3 = test1;

		std::cout << test1 << std::endl;
		std::cout <<"Copy: " << test2<<std::endl;
		std::cout <<"Ope(=): " << test3<<std::endl;
		std::cout << "--------------destructors--------------" << std::endl;
	}
	{
		std::cout << "------------test2----------------" << std::endl;
		std::cout << "test -> increment and decrement\n" << std::endl;
		Bureaucrat test1("Quimera", 1);
		Bureaucrat test2("Noah", 35);

		std::cout << test1 << std::endl;
		test1.MGrade();
		std::cout << test1 << std::endl;
		std::cout << "---" << std::endl;
		std::cout << test2 << std::endl;
		test2.PGrade();
		std::cout << test2 << std::endl;
		std::cout << "--------------destructors--------------" << std::endl;
	}
	{
		std::cout << "------------test3----------------" << std::endl;
		std::cout << "test -> increment and decrement (Exception)\n" << std::endl;
		Bureaucrat test1("Quimera", 150);
		Bureaucrat test2("Noah", 1);

		std::cout << test1 << std::endl;
		test1.MGrade();
		std::cout << test1 << std::endl;
		std::cout << "---" << std::endl;
		std::cout << test2 << std::endl;
		test2.PGrade();
		std::cout << test2 << std::endl;
		std::cout << "--------------destructors--------------" << std::endl;
	}

	return (0);
}
