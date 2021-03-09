#include "AWeapon.hpp"

AWeapon::AWeapon()
{
}

AWeapon::AWeapon( std::string const & name, int apcost, int damage ) : _name(name), _apcost(apcost), _damage(damage)
{
}

AWeapon::AWeapon( AWeapon const & obj )
{
	*this = obj;
}

AWeapon::~AWeapon()
{
}

AWeapon&	AWeapon::operator=( AWeapon const & rhs)
{
	this->_name = rhs._name;
	this->_apcost = rhs._apcost;
	this->_damage = rhs._damage;
	return (*this);
}

/*Getters*/
std::string	AWeapon::getName() const
{
	return (this->_name);
}

int			AWeapon::getAPCost() const
{
	return (this->_apcost);
}
int			AWeapon::getDamage() const
{
	return (this->_damage);
}
