#include "Peon.hpp"
#include "Sorcerer.hpp"
#include "Victim.hpp"

#define COLOR_ONE	"\033[35m"
#define COLOR_TWO	"\033[33m"
#define COLOR_NO	"\033[0m"

int main()
{
	{
		std::cout << COLOR_TWO << "------------test1----------------" << COLOR_NO << std::endl;
		Sorcerer robert("Robert", "the Magnificent");
		Victim jim("Jimmy");
		Peon joe("Joe");
		std::cout << "--------------fin - constructors--------------" << std::endl;
		std::cout << robert << jim << joe;
		robert.polymorph(jim);
		robert.polymorph(joe);
		std::cout << "--------------destructors--------------" << std::endl;
	}
	{
		std::cout << COLOR_TWO << "------------test2----------------" << COLOR_NO << std::endl;
		std::cout << "--------------constructors--------------" << std::endl;
		Victim *victim1;
		victim1 = new Peon("Nani");
		std::cout << "--------------destructors--------------" << std::endl;
		delete victim1;
	}
	return 0;
}
