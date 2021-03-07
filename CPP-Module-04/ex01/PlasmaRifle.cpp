#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 21, 5)
{
}
/*
PlasmaRifle::PlasmaRifle( std::string const & name, int apcost, int damage ) : AWeapon(name, apcost, damage)
{
}*/

PlasmaRifle::PlasmaRifle( PlasmaRifle const & obj )
{
	*this = obj;
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle&	PlasmaRifle::operator=( PlasmaRifle const & rhs)
{
	this->_name = rhs._name;
	this->_apcost = rhs._apcost;
	this->_damage = rhs._damage;
	return (*this);
}

void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

