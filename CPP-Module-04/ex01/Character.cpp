#include "Character.hpp"

Character::Character()
{
}

Character::Character( std::string const & name ) : _name(name)
{
	this->_awa = NULL;
	this->_ap = 40;
}

Character::Character( Character const & obj )
{
	*this = obj;
}

Character::~Character()
{
}

Character&	Character::operator=( Character const & rhs)
{
	this->_name = rhs._name;
	this->_ap = rhs._ap;
	this->_awa = rhs._awa;
	return (*this);
}

void Character::recoverAP()
{
	this->_ap += 10;
	if (this->_ap > 40)
		this->_ap = 40;
}


void Character::equip(AWeapon *weapon)
{
	this->_awa = weapon;
}

void Character::attack(Enemy *enemy)
{
	int	ap_cost;

	ap_cost = this->_awa->getAPCost();
	if (this->_ap - ap_cost >= 0)
	{
		this->_awa->attack();
		enemy->takeDamage(this->_awa->getDamage());
		if (enemy->getHP() <= 0)
			delete enemy;
		this->_ap -= ap_cost;
		std::cout << this->_name << " attacks " << enemy->getType() \
			<< "with a " << this->_awa->getName() << std::endl;
	}
}

/*Getters*/
std::string	Character::getName() const
{
	return (this->_name);
}

int			Character::getAp() const
{
	return (this->_ap);
}

AWeapon		*Character::getWeapon(void) const
{
	return (this->_awa);
}

std::ostream	&operator<< (std::ostream &o, const Character &rhs)
{
	o << rhs.getName() << " has " << rhs.getAp() \
		<< " AP and ";
	if (rhs.getWeapon())
		std::cout << "wields a " << rhs.getWeapon()->getName() << std::endl;
	else
		std::cout << "is unarmed" << std::endl;
	return ( o );
}

