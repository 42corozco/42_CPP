#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

//# include <string>
//# include <iostream>
#include "AWeapon.hpp"

class	PlasmaRifle : public AWeapon
{
	public:
	PlasmaRifle();
//	PlasmaRifle( std::string const & name, int apcost, int damage );
	PlasmaRifle( PlasmaRifle const & obj );
	~PlasmaRifle();
	PlasmaRifle&	operator=( PlasmaRifle const & rhs);

//atack
	virtual void	attack() const;

	private:
};

#endif

