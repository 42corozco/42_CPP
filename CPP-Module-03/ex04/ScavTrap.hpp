#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
	/*Canonical form*/
	ScavTrap();
	ScavTrap( std::string name );
	ScavTrap( ScavTrap const & obj);
	~ScavTrap();
	ScavTrap&	operator=( ScavTrap const & rhs);

	/*functions*/
	void	challengeNewcomer(unsigned int var);
};

#endif
