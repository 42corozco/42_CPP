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
		Sorcerer perso1("Quimera", "Depredator");
		Victim victim1("Noah");
		Peon nani("Nani");

		std::cout << perso1 << victim1 << nani;
		perso1.polymorph(victim1);
		perso1.polymorph(nani);
		std::cout << "--------------destructors--------------" << std::endl;
	}
	{
		std::cout << COLOR_TWO << "------------test2----------------" << COLOR_NO << std::endl;
		Victim *victim1;
		victim1 = new Peon("Nani");
		std::cout << "--------------destructors--------------" << std::endl;
		delete victim1;
	}
	return 0;
}
