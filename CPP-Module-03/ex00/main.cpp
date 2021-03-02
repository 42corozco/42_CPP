#include "FragTrap.hpp"

int		main(void)
{
	FragTrap frag1;
	FragTrap frag2("Quimera");

	srand(time(NULL));
	frag2.rangedAttack(frag1.getName());
	frag1.takeDAmage(frag2.getRangedDmg());
	frag1.meleeAttack(frag2.getName());
	frag2.takeDAmage(frag1.getMeleeDmg());
	frag1.beRepaired(100);
	frag2.beRepaired(100);
	frag1.vaulthunter_dot_exe(frag2.getName());
	frag2.takeDAmage(frag1.getDmg());
	frag2.vaulthunter_dot_exe(frag1.getName());
	frag1.takeDAmage(frag2.getDmg());
	return (0);
}
