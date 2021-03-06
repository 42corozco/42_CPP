#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int		main(void)
{
	FragTrap	frag("Quimera");
	ScavTrap	scav("Segfa");
	NinjaTrap	ninja("Marce");
	NinjaTrap	ninja2("Pacho");
	SuperTrap	super("Nani");

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
	ninja.ninjaShoebox(frag);
	ninja.ninjaShoebox(scav);
	ninja.ninjaShoebox(ninja2);
	super.vaulthunter_dot_exe(scav.getName());
	scav.takeDAmage(super.getDmg());
	super.ninjaShoebox(frag);
	return (0);
}
