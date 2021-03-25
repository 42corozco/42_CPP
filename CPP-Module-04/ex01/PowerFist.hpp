#ifndef POWERFIST_HPP
# define POWERFIST_HPP

//# include <string>
//# include <iostream>
#include "AWeapon.hpp"

class	PowerFist : public AWeapon
{
	public:
	PowerFist();
	PowerFist( PowerFist const & obj );
	virtual ~PowerFist();
	PowerFist&	operator=( PowerFist const & rhs);

	virtual void	attack() const;

	private:
};

#endif

