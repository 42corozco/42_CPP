#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "SuperMutant.hpp"

#define COLOR_ONE	"\033[35m"
#define COLOR_TWO	"\033[33m"
#define COLOR_NO	"\033[0m"

int main()
{
	{
		std::cout << COLOR_TWO << "------------test1----------------" << COLOR_NO << std::endl;
		Character* me = new Character("me");
		std::cout << *me;
		Enemy* b = new RadScorpion();
		AWeapon* pr = new PlasmaRifle();
		AWeapon* pf = new PowerFist();
		std::cout << "--------------fin - constructors--------------" << std::endl;

		me->equip(pr);
		std::cout << *me;
		me->equip(pf);
		me->attack(b);
		std::cout << *me;
		me->equip(pr);
		std::cout << *me;
		me->attack(b);
		std::cout << *me;
		me->attack(b);
		std::cout << *me;
		delete pr;
		delete pf;
		delete me;
	}
	{
		std::cout << COLOR_TWO << "------------test2----------------" << COLOR_NO << std::endl;
		Character* me = new Character("me");
		Enemy* b = new SuperMutant();
		AWeapon* pr = new PlasmaRifle();
		AWeapon* pf = new PowerFist();
		std::cout << "--------------fin - constructors--------------" << std::endl;
	
		me->equip(pr);
		std::cout << *me;
		me->attack(b);
		me->equip(pf);
		std::cout << *me;
		me->attack(b);
		std::cout << *me;

		std::cout << "--------------destructors--------------" << std::endl;
		delete pr;
		delete pf;
		delete b;
		delete me;

	}
	return 0;
}
