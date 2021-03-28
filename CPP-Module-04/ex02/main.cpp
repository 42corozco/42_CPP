#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"
#include <unistd.h>

#define COLOR_ONE	"\033[35m"
#define COLOR_TWO	"\033[33m"
#define COLOR_NO	"\033[0m"

int main()
{
	{
		std::cout << COLOR_TWO << "------------test1----------------" << COLOR_NO << std::endl;
		ISpaceMarine* bob = new TacticalMarine();
		ISpaceMarine* jim = new AssaultTerminator();

		ISquad* vlc = new Squad();
		vlc->push(bob);
		vlc->push(jim);
		for (int i = 0; i < vlc->getCount(); ++i)
		{
			ISpaceMarine* cur = vlc->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		std::cout << "--------------destructors--------------" << std::endl;
		delete vlc;
		delete bob;
		delete jim;
	}
	{
		std::cout << COLOR_TWO << "------------test2----------------" << COLOR_NO << std::endl;
		ISpaceMarine* bob = new TacticalMarine();
		std::cout << "--------------Constructors--------------" << std::endl;

		bob->battleCry();
		std::cout << "Clone" << std::endl;
		ISpaceMarine* nani;
		nani = bob->clone();
		nani->rangedAttack();
		std::cout << "--------------destructors--------------" << std::endl;
		delete bob;
		delete nani;
	}
	return 0;
}
