#include "Enemy.hpp"

Enemy::Enemy()
{
}

Enemy::Enemy( Enemy const & obj )
{
	*this = obj;
}

Enemy::Enemy( int hp, std::string const & type ) : _hp(hp), \
	_type(type)
{
}

Enemy::~Enemy()
{
}

Enemy&	Enemy::operator=( Enemy const & rhs)
{
	this->_type = rhs._type;
	this->_hp = rhs._hp;
	return (*this);
}

/*Getters*/
std::string		Enemy::getType() const
{
	return (this->_type);
}

int				Enemy::getHP() const
{
	return (this->_hp);
}

/*method*/
void			Enemy::takeDamage(int i)
{
	int tmp;

	tmp = this->_hp - i;
	if (tmp < 0)
		this->_hp = 0;
	else 
		this->_hp -= i;
}
