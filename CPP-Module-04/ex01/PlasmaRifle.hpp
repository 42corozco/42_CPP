#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

//# include <string>
//# include <iostream>
#include "AWeapon.hpp"

class	PlasmaRifle : public AWeapon
{
	public:
	PlasmaRifle();
	PlasmaRifle( PlasmaRifle const & obj );
	virtual ~PlasmaRifle();
	PlasmaRifle&	operator=( PlasmaRifle const & rhs);

	virtual void	attack() const;

	private:
};

#endif

