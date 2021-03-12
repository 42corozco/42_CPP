#include "Squad.hpp"

Squad::Squad()
{
	this->_count = 0;
	this->_unit = NULL;
}

Squad::Squad( Squad const & obj )
{
	*this = obj;
}

Squad&	Squad::operator=( Squad const & rhs)
{
	this->_count = rhs._count;
	this->_unit =rhs._unit;
	return ( *this );
}

Squad::~Squad()
{
}

int				Squad::getCount() const
{
	return ( this->_count );
}

ISpaceMarine*	Squad::getUnit(int) const //falta terminar
{
	return ();
}
//	 int				Squad::push(ISpaceMarine*);
