#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	FragTrap frag("Quimera");
	ScavTrap scav("Segfa");

	srand(time(NULL));
	frag.rangedAttack(scav.getName());
	scav.takeDAmage(frag.getRangedDmg());
	scav.meleeAttack(frag.getName());
	frag.takeDAmage(scav.getMeleeDmg());
	scav.beRepaired(100);
	frag.beRepaired(100);
	frag.vaulthunter_dot_exe(scav.getName());
	scav.takeDAmage(frag.getDmg());
	scav.challengeNewcomer(3);
	return (0);
}
