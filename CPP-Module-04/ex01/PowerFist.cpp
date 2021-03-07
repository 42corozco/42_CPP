#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 50, 8)
{
}
/*
PowerFist::PowerFist( std::string const & name, int apcost, int damage ) : AWeapon(name, apcost, damage)
{
}*/

PowerFist::PowerFist( PowerFist const & obj )
{
	*this = obj;
}

PowerFist::~PowerFist()
{
}

PowerFist&	PowerFist::operator=( PowerFist const & rhs)
{
	this->_name = rhs._name;
	this->_apcost = rhs._apcost;
	this->_damage = rhs._damage;
	return (*this);
}

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
