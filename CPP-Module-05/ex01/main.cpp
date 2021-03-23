#include "Bureaucrat.hpp"
#include "Form.hpp"

#define COLOR_ONE	"\033[35m"
#define COLOR_TWO	"\033[33m"
#define COLOR_NO	"\033[0m"

int		main(void)
{
	{
		std::cout << COLOR_ONE << "\n------------EXERCICE_00----------" << COLOR_NO << std::endl;
		std::cout << COLOR_TWO << "------------test1----------------" << COLOR_NO << std::endl;
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
		std::cout << COLOR_TWO << "------------test2----------------" << COLOR_NO << std::endl;
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
		try
		{
			std::cout << COLOR_TWO << "------------test3----------------" << COLOR_NO << std::endl;
			std::cout << "test -> increment and decrement (Exception)\n" << std::endl;
			Bureaucrat test1("Quimera", 150);

			std::cout << test1 << std::endl;
			test1.MGrade();
			std::cout << test1 << std::endl;
			std::cout << "--------------destructors--------------" << std::endl;
		}
		catch(std::exception & e)
		{
			std::cerr << "Error "<< e.what() << std::endl;
		}
		try
		{
			std::cout << "---" << std::endl;
			Bureaucrat test2("Noah", 1);
			std::cout << test2 << std::endl;
			test2.PGrade();
			std::cout << test2 << std::endl;
			std::cout << "--------------destructors--------------" << std::endl;
		}
		catch(std::exception & e)
		{
			std::cerr << "Error "<< e.what() << std::endl;
		}
	}
	{
		std::cout << COLOR_TWO << "------------test4----------------" << COLOR_NO << std::endl;
		std::cout << "test -> create with un invalid grade(Exception)\n" << std::endl;
		try
		{
			Bureaucrat test1("Quimera", 0);
		}
		catch(std::exception & e)
		{
			std::cerr << "Error: 1 "<< e.what() << std::endl;
		}
		try
		{
			Bureaucrat test2("Noah", 156);
		}
		catch(std::exception & e)
		{
			std::cerr << "Error: 150 "<< e.what() << std::endl;
		}
	}
	{
		std::cout << COLOR_ONE << "\n------------EXERCICE_01----------" << COLOR_NO << std::endl;
		std::cout << COLOR_TWO << "------------test1----------------" << COLOR_NO << std::endl;
		std::cout << "Test -> copy constructor and operator '='\n" << std::endl;

		Form	test1("Quimera", 1, 100);
		Form	test2 = test1;
		Form	test3(test2);
		std::cout << test1 << std::endl;
		std::cout << "Ope(=) " << test2 << std::endl;
		std::cout << "Copy: " <<test3 << std::endl;
		std::cout << "--------------destructors--------------" << std::endl;
	}
	{
		std::cout << COLOR_TWO << "------------test2----------------" << COLOR_NO << std::endl;
		std::cout << "test -> create with un invalid grade(Exception)\n" << std::endl;
		try
		{
			Form	test1("Form1.doc", 0, 100);
		}
		catch(std::exception &e)
		{
			std::cerr << "Error: 1 "<< e.what() << std::endl;
		}
		try
		{
			Form	test2("Form2.doc", 1, 151);
		}
		catch(std::exception &e)
		{
			std::cerr << "Error: 150 "<< e.what() << std::endl;
		}
	}
	{
		std::cout << COLOR_TWO << "------------test3----------------" << COLOR_NO << std::endl;
		std::cout << "test -> BeSigned and Signform\n" << std::endl;
		Bureaucrat	test1("Quimera", 1);
		Bureaucrat	test2("Noah", 120);
		Form		form1("Form1.doc", 1, 130);
		Form		form2("Form2.doc", 125, 130);
		Form		form3("Form3.doc", 110, 130);

		form1.beSigned(test1);
		form2.beSigned(test2);
		form3.beSigned(test2);
		std::cout << "--------------destructors--------------" << std::endl;
	}
	return (0);
}
