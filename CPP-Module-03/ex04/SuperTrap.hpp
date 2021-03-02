#ifndef SUPERTRAP_CPP
# define SUPERTRAP_CPP

# include <iostream>
# include <string>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class	SuperTrap : public NinjaTrap, public FragTrap
{
	public:
	SuperTrap();
	SuperTrap( std::string name );
	SuperTrap( SuperTrap const & obj);
	~SuperTrap();
	SuperTrap&	operator=( SuperTrap const & rhs);

};

#endif
