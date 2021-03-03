#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <string>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	NinjaTrap : public virtual ClapTrap
{
	public:
	NinjaTrap();
	NinjaTrap( std::string name );
	NinjaTrap( NinjaTrap const & obj);
	~NinjaTrap();
	NinjaTrap&	operator=( NinjaTrap const & rhs);

	void	ninjaShoebox( FragTrap &cible );
	void	ninjaShoebox( ScavTrap &cible );
	void	ninjaShoebox( NinjaTrap &cible );
};

#endif
