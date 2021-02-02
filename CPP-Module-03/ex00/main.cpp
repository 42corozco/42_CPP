#include "FragTrap.hpp"

int		main(void)
{
	FragTrap nani;
	FragTrap nani2("Quimera");

	nani.takeDAmage(30);
	nani2.takeDAmage(300);
	nani.beRepaired(100);
	nani2.beRepaired(50);
	return (0);
}
