#include "FragTrap.hpp"

int		main(void)
{
	FragTrap frag1("Noah");
	FragTrap frag2("Quimera");

	
	frag2.rangedAttack(frag1.getName());
	frag1.takeDAmage(70);
	//frag1.takeDAmage(get....);
	frag1.rangedAttack(frag2.getName());
	frag2.takeDAmage(30);
	//frag2.takeDAmage(get....);
	frag1.beRepaired(40);
	frag2.beRepaired(10);
	return (0);
}
