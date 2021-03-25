#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"

int main()
{
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");
		std::cout << "I am " << me->getName() << std::endl;

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	{
		std::cout << "----------------------main2-------------------------\n";
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Cure());
		// Inventory < 4
		std::cout << "---" << std::endl;
		Character* me = new Character("me");
		std::cout << "I am " << me->getName() << std::endl;
		Character* bob = new Character("bob");
		std::cout << "I am " << bob->getName() << std::endl;
		
		AMateria* tmp1;
		AMateria* tmp2;
		AMateria* tmp3;
		AMateria* tmp4;
		AMateria* tmp5;
		tmp1 = src->createMateria("ice");
		std::cout << "Materia " << tmp1->getType() << " with " << tmp1->getXP() << " XP" << std::endl;
		me->equip(tmp1);
		tmp2 = src->createMateria("cure");
		std::cout << "Materia " << tmp2->getType() << " with " << tmp2->getXP() << " XP" << std::endl;
		me->equip(tmp2);
		tmp3 = src->createMateria("ice");
		std::cout << "Materia " << tmp3->getType() << " with " << tmp3->getXP() << " XP" << std::endl;
		me->equip(tmp3);
		tmp4 = src->createMateria("cure");
		std::cout << "Materia " << tmp4->getType() << " with " << tmp4->getXP() << " XP" << std::endl;
		me->equip(tmp4);
		tmp5 = src->createMateria("cure");
		me->equip(tmp5);

		std::cout << "test copy constructor" << std::endl;
		std::cout << "I am " << me->getName() << std::endl;

		me->use(0, *bob);
		std::cout << "Materia " << tmp1->getType() << " with " << tmp1->getXP() << " XP" << std::endl;
		me->use(1, *bob);
		std::cout << "Materia " << tmp2->getType() << " with " << tmp2->getXP() << " XP" << std::endl;
		std::cout << "-------" << std::endl;
		Character *copy = new Character(*me);
		std::cout << "C: I am " << copy->getName() << std::endl;
		copy->use(0, *bob);
		std::cout << "Materia " << tmp1->getType() << " with " << tmp1->getXP() << " XP" << std::endl;
		copy->use(1, *bob);
		std::cout << "Materia " << tmp1->getType() << " with " << tmp1->getXP() << " XP" << std::endl;
		std::cout << "-------" << std::endl;
		me->use(0, *bob);
		std::cout << "Materia " << tmp1->getType() << " with " << tmp1->getXP() << " XP" << std::endl;
		me->use(1, *bob);
		std::cout << "Materia " << tmp2->getType() << " with " << tmp2->getXP() << " XP" << std::endl;

		me->use(4, *bob);

		delete me;
		delete bob;
		delete src;
	}
	return 0;
}
