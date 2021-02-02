#include "FragTrap.hpp"

int		main(void)
{
	FragTrap frag1("Noah");
	FragTrap frag2("Quimera");

	
	frag2.rangedAttack(frag1.getName());
	frag1.takeDAmage(frag2.getRangedDmg());
	frag1.meleeAttack(frag2.getName());
	frag2.takeDAmage(frag1.getMeleeDmg());
	frag1.beRepaired(40);
	frag2.beRepaired(10);
	return (0);
}
